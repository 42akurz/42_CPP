#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>
# include <sstream>

# define LOG(x) (std::cout << x << std::endl)

template< class T >
class Array {

	private:
		T					*array;
		unsigned int		arraySize;

	public:
		Array() : arraySize(0) { this->array = new T[0]; }

		Array( unsigned int n ) : arraySize(n) { this->array = new T[n]; }

		Array( const Array &in ) : arraySize(in.arraySize)
		{
			this->array = new T[in.arraySize];
			for (size_t i = 0; i < in.arraySize; i++)
				this->array[i] = in.array[i];
		}

		~Array() { delete [] this->array; }

		Array	&operator=( const Array &in )
		{
			delete this->array;

			this->array = new T[in.arraySize];
			this->arraySize = in.arraySize;
			for (size_t i = 0; i < in.arraySize; i++)
				this->array[i] = in.array[i];

			return *this;
		}

		T	&operator[]( unsigned int i ) const
		{
			if (i >= this->arraySize)
				throw OutOfBoundsException();
			return this->array[i];
		}

		unsigned int	size( void ) const { return this->arraySize; }

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "error: index is out of bounds";
				}
		};
};

template <typename T>
std::ostream	&operator<<( std::ostream &o, const Array<T> &arr )
{
	o << "--------" << std::endl;
	for (size_t i = 0; i < arr.size(); i++)
		o << arr[i] << std::endl;
	o << "--------" << std::endl;
	return o;
}

#endif