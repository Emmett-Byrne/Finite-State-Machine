#include "Jumping.h"

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "jumping to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
