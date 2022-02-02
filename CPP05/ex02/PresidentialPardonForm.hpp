#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm( const std::string &target );
		PresidentialPardonForm( const PresidentialPardonForm &in );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&operator=( const PresidentialPardonForm &in );

		virtual void	action( void ) const;
};

#endif 