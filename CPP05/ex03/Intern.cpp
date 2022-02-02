#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ) {}

Intern::Intern( const Intern &in ) { (void)in; }

Intern::~Intern( void ) {}

Intern	&Intern::operator=( const Intern &in ) { (void)in; return *this; }

Form	*Intern::makeForm( const std::string &nameForm, const std::string &target )
{
	std::string	names[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	Form	*(*forms[])( const std::string &target ) = {
		&RobotomyRequestForm::createNew,
		&PresidentialPardonForm::createNew,
		&ShrubberyCreationForm::createNew,
	};

	for (size_t i = 0; i < (sizeof(names) / sizeof(names[0])); i++)
	{
		if (names[i] == nameForm)
		{
			std::cout << "Intern creates " << names[i] << std::endl;
			return forms[i](target);
		}
	}
	throw std::invalid_argument("Name of form does not exist");
}