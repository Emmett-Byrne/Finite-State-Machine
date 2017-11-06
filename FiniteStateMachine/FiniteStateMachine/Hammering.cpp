#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
