#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &in );
		~Bureaucrat();

		Bureaucrat	&operator=( const Bureaucrat &in );

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "grade too high";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "grade too low";
				}
		};

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void		incrementGrade( void );
		void		decrementGrade( void );
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &in );

#endif