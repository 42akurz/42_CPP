#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ) : Form("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	// this->action();
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &in ) : Form("ShrubberyCreationForm", 145, 137)
{
	this->setSigned(in.getSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &in )
{
	this->setSigned(in.getSigned());
	return *this;
}

void	ShrubberyCreationForm::action( void ) const
{
	std::string		filename = this->getTarget() + "_shrubbery";
	std::ofstream	outfile(filename);

	outfile << "ASCII tree" << std::endl;
	outfile.close();
}

Form	*ShrubberyCreationForm::createNew( const std::string &target )
{
	return new ShrubberyCreationForm(target);
}