#pragma once
#include <State.h>
#include <Idle.h>

class Hammering : public State
{
public:
	Hammering();
	~Hammering();

	void idle(Animation* a);
private:

};