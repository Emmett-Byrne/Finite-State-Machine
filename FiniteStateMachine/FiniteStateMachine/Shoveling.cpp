#include "Shoveling.h"

Shoveling::Shoveling()
{
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shoveling to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
