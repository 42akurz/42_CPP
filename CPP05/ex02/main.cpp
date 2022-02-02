#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define TESTS_1 1
#define TESTS_2 1
#define TESTS_3 1

int main( void )
{
	#if TESTS_1
	{
		std::cout << "TEST1 ----------------------------------------------" << std::endl;
		try
		{
			ShrubberyCreationForm	test1("Test1-target");
			RobotomyRequestForm		test2("Test2-target");
			PresidentialPardonForm	test3("Test3-target");

			std::cout << test1 << std::endl;
			std::cout << std::endl;
			std::cout << test2 << std::endl;
			std::cout << std::endl;
			std::cout << test3 << std::endl;
			std::cout << std::endl;

			Bureaucrat	Jeffrey("Jeffrey", 5);

			std::cout << Jeffrey << std::endl;
			std::cout << std::endl;

			test1.beSigned(Jeffrey);
			test2.beSigned(Jeffrey);
			test3.beSigned(Jeffrey);

			test1.execute(Jeffrey);
			std::cout << std::endl;
			test2.execute(Jeffrey);
			std::cout << std::endl;
			Jeffrey.executeForm(test3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		
	#endif

	#if TESTS_2
	{
		std::cout << "TEST2 ----------------------------------------------" << std::endl;
		try
		{
			Bureaucrat	mihai("mihai", 45);

			RobotomyRequestForm	testing("random");

			testing.execute(mihai);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	#endif

	#if TESTS_3
	{
		std::cout << "TEST3 ----------------------------------------------" << std::endl;
		try
		{
			Bureaucrat	mihai("mihai", 50);

			RobotomyRequestForm	testing("random");

			mihai.signForm(testing);

			mihai.executeForm(testing);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	#endif
	return 0;
}