#pragma once
#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <fstream>
#include <stab.h>
#include <iostream>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class Replacer {

	private:
		std::string		_infile_name;
		std::string		_outfile_name;
		std::string		_s1;
		std::string		_s2;
		std::string		_replacedString;
		std::string		_replacedText;

	public:
		Replacer( std::string infile_name, std::string s1, std::string s2 );
		~Replacer( void );

		std::string	get_infile_name( void ) const;
		std::string	get_outfile_name( void ) const;
		std::string	get_replacedText_name( void ) const;
		void		replaceString( std::string line );
};

#endif