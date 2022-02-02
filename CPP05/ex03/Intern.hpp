#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {

	public:
		Intern();
		Intern( const Intern &in );
		~Intern();

		Intern	&operator=( const Intern &in );

		Form	*makeForm( const std::string &nameForm, const std::string &target );
};


#endif