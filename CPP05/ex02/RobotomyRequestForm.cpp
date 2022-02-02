#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
	// this->action();
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &in ) : Form("RobotomyRequestForm", 72, 45)
{
	this->setSigned(in.getSigned());
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &in )
{
	this->setSigned(in.getSigned());
	return *this;
}

void	RobotomyRequestForm::action( void ) const
{
	srand(time(NULL));

	bool	random = (rand() % 2);

	std::cout << "* drilling noices *" << std::endl;

	if (random)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy on: " << this->getTarget() << " failed" << std::endl;
}