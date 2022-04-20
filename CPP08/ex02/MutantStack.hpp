#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <algorithm>
# include <stack>
# include <list>

# define LOG(x) (std::cout << x << std::endl)

template< class T >
class MutantStack : public std::stack<T> {

	public:
		MutantStack( void ) : std::stack<T>() {}
		MutantStack( const MutantStack &in ) : std::stack<T>(in) { *this = *in; }
		~MutantStack( void ) {}

		MutantStack	&operator=( const MutantStack &in ) { this->c = in.c; return *this; }

		typedef typename MutantStack<T>::container_type::iterator iterator;

		iterator	begin( void ) {
			return this->c.begin();
		}

		iterator	end( void ) {
			return this->c.end();
		}
};

#endif