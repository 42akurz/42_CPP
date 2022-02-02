#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		std::string			_target;

	public:
		Form();
		Form( std::string, int, int);
		Form( const Form &in );
		virtual ~Form();

		Form	&operator=( const Form &in );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		void		setSigned( bool );
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;

		std::string	getTarget( void ) const;
		void		setTarget( const std::string &target );

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
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "form: not signed";
				}
		};

		void	beSigned( const Bureaucrat &in );

		void			execute( Bureaucrat const & executor ) const;
		virtual void	action( void ) const = 0;
};

std::ostream	&operator<<( std::ostream &o, const Form &in );

#endif