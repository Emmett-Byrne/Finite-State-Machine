#pragma once
#include "State.h"

class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);
	void swording(Animation* a);
};