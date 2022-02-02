#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form();
		Form( std::string, int, int);
		Form( const Form &in );
		~Form();

		Form	&operator=( const Form &in );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		void		setSigned( void );
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "form: grade too high";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "form: grade too low";
				}
		};

		void	beSigned( const Bureaucrat &in );
};

std::ostream	&operator<<( std::ostream &o, const Form &in );

#endif