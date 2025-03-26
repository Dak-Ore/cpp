#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < INVENTORY_SLOT; i++)
		this->_source[i] = NULL; 
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INVENTORY_SLOT; i++)
		if (this->_source[i])
			delete(this->_source[i]); 
}


MateriaSource &MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < INVENTORY_SLOT; i++)
		{
			if (rhs._source[i])
				this->_source[i] = rhs._source[i]->clone();
			else
				this->_source[i] = NULL;
		}
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (this->_source[i])
	{
		if (this->_source[i] == m)
			return ;
		i++;
	}
	if (i < INVENTORY_SLOT)
	{
		this->_source[i] = m;
		return ;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < INVENTORY_SLOT)
	{
		if (this->_source[i] && this->_source[i]->getType() == type)
			break ;
		i++;
	}
	if (i < INVENTORY_SLOT && this->_source[i])
		return this->_source[i]->clone();
	return (0);
}