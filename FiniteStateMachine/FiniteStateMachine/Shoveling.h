#pragma once
#include <State.h>
#include <Idle.h>

class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();

	void idle(Animation* a);
private:

};