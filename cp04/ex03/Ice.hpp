#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria
{

	public:
		Ice();
		Ice( Ice const & src );
		~Ice();
		Ice &		operator=( Ice const & rhs );

		Ice *clone() const;
		void use(ICharacter &target);

	private:

};

#endif 