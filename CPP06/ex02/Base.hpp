#ifndef BASE_HPP
# define BASE_HPP

# include <string>
# include <iostream>

# define LOG(x) (std::cout << x << std::endl)

class Base {

	public:
		virtual ~Base() {};
};

Base	*generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif