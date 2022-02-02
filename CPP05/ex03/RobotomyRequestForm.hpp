#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm( const std::string &target );
		RobotomyRequestForm( const RobotomyRequestForm &in );
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	&operator=( const RobotomyRequestForm &in );

		virtual void	action( void ) const;
		static Form		*createNew( const std::string &target );
};

#endif