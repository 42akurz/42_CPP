#include "Converter.hpp"

int	main( int argc, char **argv )
{
	Converter	holy;

	if (argc != 2)
	{
		LOG("error: wrong number of arguments");
		return 1;
	}
	try
	{
		holy.convertionDriver(argv[1]);
	}
	catch( std::invalid_argument &bc )
	{
		std::cerr << "convertion failed: " << bc.what() << '\n';
	}
	return 0;
}