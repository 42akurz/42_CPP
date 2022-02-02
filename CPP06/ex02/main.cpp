#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base	*instance = generate();

	LOG("");
	
	identify(instance);
	
	LOG("");

	identify(*instance);

	return 0;
}