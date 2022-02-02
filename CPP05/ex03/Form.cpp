#include "Form.hpp"

Form::Form( void ) : _name("unknown"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form( std::string n, int gts, int gte ) : _name(n), _signed(false), _gradeToSign(gts), _gradeToExecute(gte)
{
	std::cout << "FORM constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form &in ) : _name(in._name), _signed(in._signed), _gradeToSign(in._gradeToSign), _gradeToExecute(in._gradeToExecute) {}

Form::~Form( void ) { std::cout << "FORM destructor called" << std::endl; }

Form	&Form::operator=( const Form &in )
{
	this->_signed = in._signed;
	return *this;
}

std::string	Form::getName( void ) const
{
	return this->_name;
}

bool	Form::getSigned( void ) const
{
	return this->_signed;
}

void	Form::setSigned( bool set )
{
	this->_signed = set;
}

int		Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int		Form::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}

std::ostream	&operator<<( std::ostream &o, const Form &in )
{
	o << "Form name: " << in.getName() << std::endl << "signed: " << std::boolalpha << in.getSigned() << std::endl << "required grade to sign: " << in.getGradeToSign() << std::endl << "required grade to execute: " << in.getGradeToExecute();
	return o;
}

void	Form::beSigned( const Bureaucrat &in )
{
	if (in.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else
	{
		this->setSigned(true);
		std::cout << this->getName() << " was signed by " << in.getName() << std::endl;
	}
}

std::string	Form::getTarget( void ) const
{
	return this->_target;
}

void	Form::setTarget( const std::string &target )
{
	this->_target = target;
}

void	Form::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		if (this->getSigned())
			this->action();
		else
			throw Form::FormNotSignedException();
	}
	else
		throw Form::GradeTooLowException();
}