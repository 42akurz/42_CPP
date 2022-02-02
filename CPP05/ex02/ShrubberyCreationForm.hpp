#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string const &target );
		ShrubberyCreationForm( const ShrubberyCreationForm &in );
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &in );

		virtual void	action( void ) const;
};


#endif