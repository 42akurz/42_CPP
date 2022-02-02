#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

# define LOG(x) (std::cout << x << std::endl)

class Data {

	private:
		std::string	data_member;

	public:
		void		setDataMember( std::string s) { data_member = s; }
		std::string	getDataMember() { return data_member; }
};

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

#endif