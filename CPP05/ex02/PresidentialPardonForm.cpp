#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	// this->action();
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &in ) : Form("PresidentialPardonForm", 25, 5)
{
	this->setSigned(in.getSigned());
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &in )
{
	this->setSigned(in.getSigned());
	return *this;
}

void	PresidentialPardonForm::action( void ) const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}