#include "Swording.h"

Swording::Swording()
{
}

Swording::~Swording()
{
}

void Swording::idle(Animation * a)
{
	std::cout << "Swording to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
