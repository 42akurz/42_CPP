#include "Array.hpp"

#define TEST1 1
#define TEST2 1
#define TEST3 1

int main( void )
{
	try
	{
		#if TEST1
		{
			LOG("TEST1 *************************");

			Array<std::string>	*array1 = new Array<std::string>(5);
			Array<std::string>	*array2 = new Array<std::string>(*array1);
			Array<std::string>	*array3 = new Array<std::string>;

			for (size_t i = 0; i < array1->size(); i++)
				(*array1)[i] = "I'm number 1";
			for (size_t i = 0; i < array2->size(); i++)
				(*array2)[i] = "I'm number 2";

			LOG("ARRAY 1:");
			LOG(*array1);
			LOG("ARRAY 2:");
			LOG(*array2);
			LOG("ARRAY 3:");
			LOG(*array3);

			// array3->setArrayElement(1, "not possible"); // --> exception

			delete array1;
			delete array2;
			delete array3;
		}
		#endif

		#if TEST2
		{
			LOG("TEST2 *************************");

			Array<int>	*array1 = new Array<int>(5);
			Array<int>	*array2 = new Array<int>;

			for (size_t i = 0; i < array1->size(); i++)
				(*array1)[i] = i;

			LOG("ARRAY 1:");
			LOG(*array1);
			LOG("ARRAY 2:");
			LOG(*array2);

			*array2 = *array1;
			(*array2)[0] = 42;

			LOG("ARRAY 1:");
			LOG(*array1);
			LOG("ARRAY 2:");
			LOG(*array2);

			delete array1;
			delete array2;
		}
		#endif

		#if TEST3
		{
			LOG("TEST3 *************************");

			Array<char>	*array1 = new Array<char>(5);

			LOG("ARRAY 1:");
			LOG(*array1);

			for (size_t i = 0; i < array1->size(); i++)
				(*array1)[i] = 'a';

			LOG("ARRAY 1:");
			LOG(*array1);

			delete array1;
		}
		#endif
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}