#include "Form.hpp"
#include "Bureaucrat.hpp"

#define TEST1 1
#define TEST2 1
#define TEST3 1

int main(void)
{
	#if TEST1
	{
		std::cout << "TEST1 ----------------------------------------------" << std::endl;
		try
		{
			Form	high("high", 0, 0);
			Form	low("low", 151, 151);
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
			Form		someForm("someForm", 50, 20);
			Bureaucrat	pavel("Pavel", 50);
			// Bureaucrat	pavel("Pavel", 51); // throw error

			std::cout << someForm << std::endl;
			std::cout << std::endl;
			std::cout << pavel << std::endl;

			std::cout << std::endl;			

			someForm.beSigned(pavel);

			std::cout << std::endl;

			std::cout << someForm << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	#endif

	#if TEST3
	{
		std::cout << "TEST3 ----------------------------------------------" << std::endl;
		try
		{
			Form		someForm("someForm", 50, 20);
			Bureaucrat	jawiq("Jawiq", 20);
			// Bureaucrat	jawiq("Jawiq", 70); // throws error

			std::cout << someForm << std::endl;
			std::cout << std::endl;
			std::cout << jawiq << std::endl;

			std::cout << std::endl;

			jawiq.signForm(someForm);

			std::cout << std::endl;

			std::cout << someForm << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	#endif
	return 0;
}