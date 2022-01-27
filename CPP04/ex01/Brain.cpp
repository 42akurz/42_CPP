#include "Brain.hpp"

Brain::Brain( void )
{
	PRINT("Brain		constructor called");
}

Brain::~Brain( void )
{
	PRINT("Brain		destructor called");
}

Brain::Brain( const Brain &in )
{
	PRINT("Brain		copy constructor called");
	std::copy(std::begin(in.ideas), std::end(in.ideas), std::begin(this->ideas));
}

Brain	&Brain::operator=( const Brain &in )
{
	PRINT("Brain		operator= called");
	std::copy(std::begin(in.ideas), std::end(in.ideas), std::begin(this->ideas));
	return *this;
}