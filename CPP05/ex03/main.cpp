#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
	try
	{
		Intern	someRandomIntern;
		Form	*randomForm;

		randomForm = someRandomIntern.makeForm("presidential pardon", "NASA");

		std::cout << std::endl;

		std::cout << *randomForm << std::endl;

		std::cout << std::endl;

		delete randomForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}