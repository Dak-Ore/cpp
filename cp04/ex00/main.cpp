/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:17:21 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 22:10:50 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "<<<SUBJECT TESTING>>>" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);

	std::cout << std::endl << "<<<ANIMAL TESTING>>>" << std::endl;
	const Animal* anim = new Animal();
	std::cout << "anim type is : " << anim->getType() << std::endl;
	anim->makeSound();
	delete(anim);

	std::cout << std::endl << "<<<DOG TESTING>>>" << std::endl;
	const Animal* doge = new Dog();
	std::cout << "doge type is : " << doge->getType() << std::endl;
	doge->makeSound();
	delete(doge);

	std::cout << std::endl << "<<<CAT TESTING>>>" << std::endl;
	const Animal* kitty = new Cat();
	std::cout << "kitty type is : " << kitty->getType() << std::endl;
	kitty->makeSound();
	delete(kitty);

	std::cout << std::endl << "<<<WRONG ANIMAL TESTING>>>" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	std::cout << "wrong type is : " << wrong->getType() << std::endl;
	wrong->makeSound();
	delete(wrong);

	std::cout << std::endl << "<<<WRONG CAT TESTING>>>" << std::endl;
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "wcat type is : " << wcat->getType() << std::endl;
	wcat->makeSound();
	delete(wcat);
}
