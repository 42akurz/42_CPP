#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &in ) : _grade(in._grade) {}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &in )
{
	this->_grade = in._grade;
	return *this;
}

std::string	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &in )
{
	o << in.getName() << ", bureaucrat grade " << in.getGrade();
	return o;
}