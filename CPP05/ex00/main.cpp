#include "Bureaucrat.hpp"

#define TEST1 1
#define TEST2 1
#define TEST3 1

int main( void )
{
	#if TEST1
	{
		std::cout << "TEST1 ----------------------------------------------" << std::endl;
		try
		{
			Bureaucrat	dude("dude", 148);

			for (size_t i = 0; i < 5; i++)
			{
				std::cout << dude << std::endl;
				dude.decrementGrade();
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	#endif

	#if TEST2
	{
		std::cout << "TEST2 ----------------------------------------------" << std::endl;
		try
		{
			Bureaucrat	other_dude("other dude", 5);

			for (size_t i = 0; i < 10; i++)
			{
				std::cout << other_dude << std::endl;
				other_dude.incrementGrade();
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	#endif

	#if TEST3
	{
		std::cout << "TEST3 ----------------------------------------------" << std::endl;
		try
		{
			Bureaucrat	false_dude("false dude", 152);
			// Bureaucrat	false_dude("false dude", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	#endif

	return 0;
}