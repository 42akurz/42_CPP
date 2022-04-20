#include "Span.hpp"

int main()
{
	{
		LOG("TEST1 -------------------");
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		LOG(std::endl << "TEST2 -------------------");
		try
		{
			Span sp = Span(1000000);

			for (int i = 0; i < 1000000; i++)
				sp.addNumber(i);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		LOG(std::endl << "TEST3 -------------------");
		try
		{
			Span sp = Span(1000000);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		LOG(std::endl << "TEST4 -------------------");
		try
		{
			Span sp = Span(10);

			sp.insertSequence(1, 5);
			sp.insertRange(42, 5);

			std::cout << sp;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}