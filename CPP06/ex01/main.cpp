#include "Data.hpp"

int	main( void )
{
	Data		*weird = new Data();
	uintptr_t	also_weird;

	(*weird).setDataMember("stuff");

	LOG("before serializing: ");
	LOG((*weird).getDataMember());

	also_weird = serialize(weird);

	LOG("\nafter serializing: ");
	LOG(also_weird);

	weird = deserialize(also_weird);

	LOG("\nafter deserializing: ");
	LOG((*weird).getDataMember());

	delete weird;

	return 0;
}