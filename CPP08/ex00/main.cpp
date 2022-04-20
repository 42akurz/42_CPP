#include "easyfind.hpp"

int main( void )
{
	try
	{
		std::vector<int>			vec;
		std::list<int>				lst;
		std::map<int, std::string>	mp;
		std::set<int>				st;

		for (int i = 0; i < 5; i++)
			vec.push_back(i);

		for (int i = 0; i < 5; i++)
			lst.push_back(i);

		for (int i = 0; i < 5; i++)
			mp.insert(std::pair<int, std::string>(i, std::string("string at " + std::to_string(i))));

		for (int i = 100; i < 600; i += 100)
			st.insert(i);

		std::vector<int>::iterator i = easyfind(vec, 2);
		LOG("for vector:	" << *i);

		std::list<int>::iterator x = easyfind(lst, 3);
		LOG("for list:	" << *x);

		std::map<int, std::string>::iterator ret = easyfindForMap(mp, 4);
		LOG("for map:	" << ret->first << " = '" << ret->second << "'");

		std::set<int>::iterator	y = easyfind(st, 300);
		LOG("for set:	" << *y);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
