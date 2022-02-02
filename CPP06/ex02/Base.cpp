#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	srand(time(NULL));

	switch(rand() % 3)
	{
		case 0: LOG("created class: A"); return new A();
		case 1: LOG("created class: B"); return new B();
		case 2: LOG("created class: C"); return new C();
	}
	return nullptr;
}

void	identify( Base* p )
{
	LOG("* void identify( Base* p ) *");
	A	*a = dynamic_cast<A *>(p);
	if (a != NULL)
		LOG("identified class: A");
	B	*b = dynamic_cast<B *>(p);
	if (b != NULL)
		LOG("identified class: B");
	C	*c = dynamic_cast<C *>(p);
	if (c != NULL)
		LOG("identified class: C");
}

void	identify( Base& p )
{
	LOG("* void identify( Base& p ) *");
	try {
		A	&a = dynamic_cast<A &>(p);
		LOG("identified class: A");
		(void)a;
	}
	catch ( std::bad_cast &bc ) {}
	try {
		B	&b = dynamic_cast<B &>(p);
		LOG("identified class: B");
		(void)b;
	}
	catch ( std::bad_cast &bc ) {}
	try {
		C	&c = dynamic_cast<C &>(p);
		LOG("identified class: C");
		(void)c;
	}
	catch ( std::bad_cast &bc ) {}
}