#include "Data.hpp"

uintptr_t	serialize( Data* ptr )
{
	uintptr_t	uip_type = reinterpret_cast<uintptr_t>(ptr);
	
	return uip_type;
}

Data*		deserialize( uintptr_t raw )
{
	Data	*data_ptr = reinterpret_cast<Data *>(raw);

	return data_ptr;
}