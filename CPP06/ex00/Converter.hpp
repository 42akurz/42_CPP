#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <sstream>

# define LOG(x) (std::cout << x << std::endl)

class Converter {

	private:
		const char	*input;

		void		setConvertionString( const char	*input );

		int			minusCheck( void );
		int			dotCheck( void );
		int			fCheck( void );
		int			decimalPlacesCheck( void );

		int			specialCheck( void );
		int			intCheck( void );
		int			charCheck( void );
		int			doubleCheck( void );
		int			floatCheck( void );

		void		convertSpecial( void );
		void		convertInt( void );
		void		convertChar( void );
		void		convertDouble( void );
		void		convertFloat( void );

		void		intOverflow( int i );

		void		printSpecial( std::string c, std::string i, std::string f, std::string d );

	public:
		Converter();
		Converter( const Converter &in );
		~Converter();

		Converter	&operator=( const Converter &in );

		void	convertionDriver( const char *input );

		class BufferOverflowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "error: buffer overflow";
				}
		};
};


#endif