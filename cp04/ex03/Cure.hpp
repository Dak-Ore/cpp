#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: virtual public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();
		Cure &		operator=( Cure const & rhs );

		Cure *clone() const;
		void use(ICharacter &target);
	private:

};

#endif