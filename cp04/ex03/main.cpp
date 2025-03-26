/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:20:06 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 11:34:53 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		std::cout << "<<< SUBJECT TEST >>>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << "<<< Character Test >>>" << std::endl;
		ICharacter* player = new Character("player");
		ICharacter* target = new Character("target");
		std::cout << "getName : " << player->getName() << std::endl;
		player->use(0, *target);
		player->use(-1, *target);
		player->use(5, *target);
		player->unequip(0);
		player->unequip(4);
		delete(player);
		delete(target);
	}
	{
		ICharacter* target = new Character("target");
		std::cout << std::endl << "<<< AMateria Test >>>" << std::endl;
		AMateria *ice = new Ice();
		AMateria *cure = new Cure();
		std::cout << "getType : " << ice->getType() << std::endl;
		std::cout << "getType : " << cure->getType() << std::endl;
		ice->use(*target);
		cure->use(*target);
		AMateria *clone = ice->clone();
		std::cout << "getType : " << clone->getType() << std::endl;
		clone->use(*target);
		delete(target);
		delete(ice);
		delete(cure);
		delete (clone);
	}
	{
		std::cout << std::endl << "<<< MateriaSource test >>>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		AMateria *ice = new Ice();
		AMateria *cure = new Cure();
		AMateria *temp;
		temp = src->createMateria("ice");
		if (!temp)
			std::cout << "temp is null" << std::endl;
		src->learnMateria(cure);
		src->learnMateria(ice);
		temp = src->createMateria("ice");
		std::cout << temp->getType() << std::endl;
		src->learnMateria(ice); // can't add same object 2 time the same exact object to avoid crash
		src->learnMateria(ice->clone());
		src->learnMateria(ice->clone());
		// src->learnMateria(ice->clone()); // Uncomment to see leak because there is too many materia in the source so the clone is not deleted !
		delete(temp);
		delete(src);
	}
	{
		std::cout << std::endl << "<<< Inventory test >>>" << std::endl;
		ICharacter* player = new Character("player");
		ICharacter* target = new Character("target");
		IMateriaSource* src = new MateriaSource();
		AMateria *floor; // To delete the Materia on the floor
		AMateria *overflow; // to delete the Materia when inventory is ufll
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		player->equip(src->createMateria("ice"));
		player->use(0, *target);
		floor = src->createMateria("cure");
		player->equip(floor);
		player->equip(src->createMateria("ice"));
		player->equip(src->createMateria("ice"));
		overflow = src->createMateria("ice");
		player->equip(overflow);
		player->use(1, *target);
		player->unequip(1);
		player->use(1, *target);
		delete(floor);
		delete(overflow);
		delete(player);
		delete(target);
		delete(src);
	}
	return 0;
}