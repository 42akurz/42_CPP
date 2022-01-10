#include "Replacer.hpp"

Replacer::Replacer( std::string infile_name, std::string s1, std::string s2 ) : _infile_name(infile_name), _s1(s1), _s2(s2)
{
	this->_outfile_name = this->_infile_name + ".replace";
	PRINT("Replacer costructed");
}

Replacer::~Replacer( void )
{
	PRINT("Replacer destructed");
}

std::string	Replacer::get_infile_name( void ) const
{
	return this->_infile_name;
}

std::string	Replacer::get_outfile_name( void ) const
{
	return this->_outfile_name;
}

std::string	Replacer::get_replacedText_name( void ) const
{
	return this->_replacedText;
}

void	Replacer::replaceString( std::string line )
{
	int i = -1;
	int	flag = 0;
	
	this->_replacedString = "";
	while ((i = line.find(this->_s1, ++i)) >= 0)
	{
		flag = 1;
		this->_replacedString = line.substr(0 , i);
		this->_replacedString += this->_s2;
		this->_replacedString += line.substr(i + this->_s1.length(), line.length());
		line = this->_replacedString;
	}
	if (!flag)
		this->_replacedText += line;
	this->_replacedText += this->_replacedString;
	this->_replacedText += '\n';
}