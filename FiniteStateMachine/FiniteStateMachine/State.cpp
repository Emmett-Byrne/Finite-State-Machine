#include "State.h"

State::State() {}
State::~State() {}

void State::idle(Animation * a)
{
	std::cout << "State::Idling" << std::endl;
}

void State::shoveling(Animation * a)
{
	std::cout << "State::Shoveling" << std::endl;
}

void State::hammering(Animation * a)
{
	std::cout << "State::Hammering" << std::endl;
}

void State::walking(Animation * a)
{
	std::cout << "State::Walking" << std::endl;
}

void State::jumping(Animation * a)
{
	std::cout << "State::Jumping" << std::endl;
}

void State::swording(Animation * a)
{
	std::cout << "State::Swording" << std::endl;
}
