#include "Walking.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Walking to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
