#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"


# define INVENTORY_SLOT 4
class Character: virtual public ICharacter
{

	public:

		Character();
		Character( std::string name);
		Character( Character const & src );
		virtual ~Character();
		Character &		operator=( Character const & rhs );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria *_inventory[INVENTORY_SLOT];
};


#endif