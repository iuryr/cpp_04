#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "qolMacros.hpp"
#include "Floor.hpp"

int main(void)
{
	//Singleton for the floor where unequiped materias will lie
	println("Instatiating singleton floor...");
	Floor* floor = Floor::getInstance();

	println("");
	println("Instatiating MateriaSource and storing it in pointer to interface IMateriaSource...");
	IMateriaSource* src = new MateriaSource();
	println("Teaching Ice and Cure to MateriaSource...");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	println("");
	println("Creating Character and storing it in pointer to interface ICharacter...");
	ICharacter* me = new Character("me");
	println("Character name is " << me->getName());

	println("");
	println("Using MateriaSource method to create new Materia (indirectly call Ice's and Cure's"
		" clone methods)");
	println("New Materias will be equipped by Character \"me\"");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	println("");
	println("Creating new character that will be targeted...");
	ICharacter* bob = new Character("Bob");
	println("Character name is " << bob->getName());

	println("");
	println("Character \"me\" targets Bob... Sometimes selects wrong index in inventory...");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(-1, *bob); //should do nothing
	me->use(4, *bob); //should do nothing

	println("");
	println("Character \"me\" unequips all of its materias... even those he does not have...");
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	
	println("");
	println("####################");
	println("Instantiating Character Iury on the stack...");
	Character iury("Iury");
	println("Character name is " << iury.getName());

	println("");
	println("Equiping some Materias on "  << iury.getName());
	iury.equip(new Cure());
	iury.equip(new Cure());
	iury.equip(new Cure());
	iury.equip(new Cure());
	iury.equip(new Cure());
	iury.equip(new Cure());

	println("");
	println("Instantiating a deep copy of "  << iury.getName());
	Character deepcopy(iury);
	deepcopy = iury;

	println("");
	println(iury.getName() << " unequips all of its materia...");
	iury.unequip(0);
	iury.unequip(1);
	iury.unequip(2);
	iury.unequip(3);

	println("");
	println("Copy can still use its own inventory, since it is a deep copy...");
	deepcopy.use(0, iury);
	deepcopy.use(1, iury);
	deepcopy.use(2, iury);
	deepcopy.use(3, iury);


	println("");
	println("Deleting all heap allocated objects...");
	delete me;
	delete bob;
	delete src;
	println("Destroying singleton floor object, which triggers disposal of heap allocated materias on the floor...");
	floor->destroyInstance();

}
