#include "Converter.hpp"

Converter::Converter( void ) {}

Converter::Converter( const Converter &in ) { (void)in; }

Converter::~Converter( void ) {}

Converter	&Converter::operator=( const Converter &in ) { (void)in; return *this; }

void	Converter::setConvertionString( const char *input )
{
	this->input = input;
}

int	Converter::minusCheck( void )
{
	std::string	s(this->input);

	int	countMinus = std::count(s.begin(), s.end(), '-');
	int	posMinus = s.find('-');

	if (countMinus > 1)
		return 0;
	if (countMinus == 1 && posMinus != 0)
		return 0;
	if (countMinus == 1 && s.length() == 1)
		return 0;
	return 1;
}

int	Converter::dotCheck( void )
{
	std::string	s(this->input);

	int	countDot = std::count(s.begin(), s.end(), '.');

	if (countDot != 1)
		return 0;
	return 1;
}

int	Converter::fCheck( void )
{
	std::string	s(this->input);

	size_t	countF = std::count(s.begin(), s.end(), 'f');
	size_t	posF = s.find('f');

	if (countF != 1)
		return 0;
	if (posF != s.length() - 1)
		return 0;
	return 1;
}

int	Converter::specialCheck( void )
{
	std::string	s(this->input);

	if (s == "nan" || s == "-inff" || s == "+inff" || s == "+inf" || s == "-inf")
		return 1;
	return 0;
}

int	Converter::intCheck( void )
{
	if (!this->minusCheck())
		return 0;
	for (size_t i = 0; i < strlen(this->input); i++)
		if (!isdigit(this->input[i]))
			if (this->input[i] != '-')
				return 0;
	return 1;
}

int	Converter::charCheck( void )
{
	if (strlen(this->input) == 1 && isalpha(*this->input))
		return 1;
	return 0;
}

int	Converter::doubleCheck( void )
{
	if (!this->dotCheck())
		return 0;
	if (!this->minusCheck())
		return 0;
	for (size_t i = 0; i < strlen(this->input); i++)
		if (!isdigit(this->input[i]))
			if (this->input[i] != '.' && this->input[i] != '-')
				return 0;
	return 1;
}

int	Converter::floatCheck( void )
{
	if (!this->fCheck())
		return 0;
	if (!this->dotCheck())
		return 0;
	if (!this->minusCheck())
		return 0;
	for (size_t i = 0; i < strlen(this->input); i++)
		if (!isdigit(this->input[i]))
			if (this->input[i] != '.' && this->input[i] != '-' && this->input[i] != 'f')
				return 0;
	return 1;
}

void	Converter::printSpecial( std::string c, std::string i, std::string f, std::string d )
{
	LOG("char: " << c);
	LOG("int: " << i);
	LOG("float: " << f);
	LOG("double: " << d);
}

void	Converter::convertSpecial( void )
{
	std::string	s(this->input);

	if (s == "nan")
		this->printSpecial("impossible", "impossible", "nanf", this->input);
	if (s == "+inf")
		this->printSpecial("impossible", "impossible", "+inff", this->input);
	if (s == "-inf")
		this->printSpecial("impossible", "impossible", "-inff", this->input);
	if (s == "+inff")
		this->printSpecial("impossible", "impossible", this->input, "+inf");
	if (s == "-inff")
		this->printSpecial("impossible", "impossible", this->input, "-inf");
}

void	Converter::convertInt( void )
{
	int		i = atoi(this->input);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);
	char	c = static_cast<char>(i);
	this->intOverflow(i);

	if (isprint(c))
		LOG("char: " << "'" << c << "'");
	else
		LOG("char: " << "Non displayable");
	LOG("int: " << i);
	LOG("float: " << f << ".0f");
	LOG("double: " << d << ".0");
}

void	Converter::convertChar( void )
{
	char	c = *this->input;
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	LOG("char: " << "'" << c << "'");
	LOG("int: " << i);
	LOG("float: " << f << ".0f");
	LOG("double: " << d << ".0");
}

int	Converter::decimalPlacesCheck( void )
{
	std::string	s(this->input);

	size_t		posDot = s.find('.');
	std::string	decimalPlaces = s.substr(posDot + 1, s.length() - posDot - 1);

	for (size_t i = 0; i < decimalPlaces.length(); i++)
		if (decimalPlaces[i] != '0' && decimalPlaces[i] != 'f')
			return 0;
	return 1;
}

void	Converter::convertDouble( void )
{
	double	d = std::stod(this->input);
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	this->intOverflow(i);

	if (isprint(c))
		LOG("char: " << "'" << c << "'");
	else
		LOG("char: " << "Non displayable");
	LOG("int: " << i);
	if (decimalPlacesCheck())
	{
		LOG("float: " << f << ".0f");
		LOG("double: " << d << ".0");
	}
	else
	{
		LOG("float: " << f << "f");
		LOG("double: " << d);
	}
}

void	Converter::convertFloat( void )
{
	float	f = std::stof(this->input);
	char	c = static_cast<char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<double>(f);
	this->intOverflow(i);

	if (isprint(c))
		LOG("char: " << "'" << c << "'");
	else
		LOG("char: " << "Non displayable");
	LOG("int: " << i);
	if (decimalPlacesCheck())
	{
		LOG("float: " << f << ".0f");
		LOG("double: " << d << ".0");
	}
	else
	{
		LOG("float: " << f << "f");
		LOG("double: " << d);
	}
}

void	Converter::intOverflow( int i )
{
	std::string converted;
	std::string original(this->input);
	std::stringstream out;

	out << i;
	converted = out.str();

	int	posDot = original.find('.');
	original = original.substr(0, posDot);

	if (converted != original && !original.empty())
		throw Converter::BufferOverflowException();
}

void	Converter::convertionDriver( const char *input )
{
	this->setConvertionString(input);
	try
	{
		if (this->specialCheck())
			this->convertSpecial();
		else if (this->intCheck())
			this->convertInt();
		else if (this->charCheck())
			this->convertChar();
		else if (this->doubleCheck())
			this->convertDouble();
		else if (this->floatCheck())
			this->convertFloat();
		else
			throw std::invalid_argument("error: not convertable");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}