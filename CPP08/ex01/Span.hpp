#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <algorithm>
# include <vector>
# include <exception>

# define LOG(x) (std::cout << x << std::endl)

class Span {

	private:
		unsigned int		_maximum;
		std::vector<int>	_vec;

	public:
		Span();
		Span( unsigned int max_size );
		Span( const Span &in );
		virtual ~Span();

		Span	&operator=( const Span &in );

		int		getNumber( size_t index ) const;
		size_t	getSize( void ) const;

		void	addNumber( int );
		size_t	shortestSpan( void ) const;
		size_t	longestSpan( void ) const;

		void	insertSequence( int start, int end );
		void	insertRange( int value, int size );
};

std::ostream	&operator<<( std::ostream &o, const Span &in );

#endif