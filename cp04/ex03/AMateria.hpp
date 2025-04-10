#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria( AMateria const & src );
		virtual ~AMateria();
		AMateria &operator=( AMateria const & rhs );

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};
#endif