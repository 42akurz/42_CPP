#pragma once 

# include "Brain.hpp"

class Animal {

	protected:
		std::string	type;

	public:
		Animal();
		Animal( const Animal &in );
		virtual ~Animal();

		Animal	&operator=( const Animal &in );

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
		virtual void		printIdeas( void ) const;
		virtual void		setIdeas( int idx, std::string idea ) const;
};
