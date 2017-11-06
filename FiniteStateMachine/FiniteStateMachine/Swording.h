#pragma once
#include <State.h>
#include <Idle.h>

class Swording : public State
{
public:
	Swording();
	~Swording();

	void idle(Animation* a);
private:

};