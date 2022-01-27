#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	PRINT("MateriaSource	constructor called");

	for (size_t i = 0; i < sizeof(this->_templates) / sizeof(this->_templates[0]); i++)
		this->_templates[i] = nullptr;
}

MateriaSource::MateriaSource( const MateriaSource &in )
{
	PRINT("MateriaSource	copy constructor called");

	for (size_t i = 0; i < sizeof(this->_templates) / sizeof(this->_templates[0]); i++)
		this->_templates[i] = in._templates[i]->clone();
}

MateriaSource::~MateriaSource( void )
{
	PRINT("MateriaSource	destructor called");

	for (size_t i = 0; i < sizeof(this->_templates) / sizeof(this->_templates[0]); i++)
		delete this->_templates[i];
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &in )
{
	PRINT("MateriaSource	operator= called");

	for (size_t i = 0; i < sizeof(this->_templates) / sizeof(this->_templates[0]); i++)
	{
		delete this->_templates[i];
		this->_templates[i] = in._templates[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m )
{
	for (size_t i = 0; i < sizeof(this->_templates)/sizeof(this->_templates[0]); i++)
	{
		if (this->_templates[i] == nullptr)
		{
			this->_templates[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (size_t i = 0; i < sizeof(this->_templates)/sizeof(this->_templates[0]); i++)
	{
		if (this->_templates[i] != nullptr)
			if (this->_templates[i]->getType() == type)
				return this->_templates[i]->clone();
	}
	return 0;
}