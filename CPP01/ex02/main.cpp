#include <iostream>
#include <string>

#define PRINT(__msg, __msg2) std::cout << __msg << __msg2 << std::endl

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;

	std::string	&stringREF = string;

	PRINT("&string:	", &string);
	PRINT("stringPTR:	", stringPTR);
	PRINT("&stringREF:	", &stringREF);

	std::cout << std::endl;

	PRINT("string:		", string);
	PRINT("*stringPTR:	", *stringPTR);
	PRINT("stringREF:	", stringREF);

	return 0;
}