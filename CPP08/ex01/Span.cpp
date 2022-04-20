#include "Span.hpp"

Span::Span( void ) : _maximum(0) {}

Span::Span( unsigned int max_size ) : _maximum(max_size) {}

Span::Span( const Span &in ) : _maximum(in._maximum), _vec(in._vec) {}

Span::~Span( void ) {}

Span	&Span::operator=( const Span &in )
{
	this->_maximum = in._maximum;
	this->_vec = in._vec;
	return *this;
}

int	Span::getNumber( size_t index ) const
{
	if (index < this->_vec.size())
		return this->_vec[index];
	else
		throw std::runtime_error("exception: Span: index doesn't exist");
}

size_t	Span::getSize( void ) const
{
	return this->_vec.size();
}

void	Span::addNumber( int number )
{
	if (this->_vec.size() == this->_maximum)
		throw std::runtime_error("exception: Span: full");
	else
		this->_vec.push_back(number);
}

std::ostream	&operator<<( std::ostream &o, const Span &in )
{
	for (size_t i = 0; i < in.getSize(); i++)
		o << in.getNumber(i) << std::endl;
	return o;
}

size_t	Span::longestSpan( void ) const
{
	if (this->_vec.size() < 2)
		throw std::runtime_error("exception: Span: too few numbers");
	int	max = *std::max_element(this->_vec.begin(), this->_vec.end());
	int	min = *std::min_element(this->_vec.begin(), this->_vec.end());
	return max - min;
}

size_t	Span::shortestSpan( void ) const
{
	std::vector<int>	temp = _vec;
	size_t				diff = INT_MAX;

	if (this->_vec.size() < 2)
		throw std::runtime_error("exception: Span: too few numbers");
	std::sort(temp.begin(), temp.end());
	for (size_t i = 0; i < temp.size() - 1; i++)
		if (static_cast<size_t>(temp[i + 1] - temp[i]) < diff)
			diff = temp[i + 1] - temp[i];
	return diff;
}

void	Span::insertSequence( int start, int end )
{
	if (end >= start)
	{
		if (_vec.size() + (end - start) >= _maximum)
			throw std::runtime_error("exception: Span: full");
		for (int i = start; i <= end; i++)
			_vec.push_back(i);
	}
	else if (start > end)
	{
		if (_vec.size() + (start - end) >= _maximum)
			throw std::runtime_error("exception: Span: full");
		for (int i = start; i >= end; i--)
			_vec.push_back(i);
	}
}

void	Span::insertRange( int value, int size )
{
	if (_vec.size() + size > _maximum)
		throw std::runtime_error("exception: Span: full");
	if (size <= 0)
		throw std::invalid_argument("exception: Span: invalid size");
	for (int i = 0; i < size; i++)
		_vec.push_back(value);
}