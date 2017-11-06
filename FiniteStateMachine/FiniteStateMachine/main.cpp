#include <iostream>
#include "Animation.h"
#include <thread>
#include <chrono>

int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		else
		{
			fsm.swording();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 0;
		}
	}

	fsm.hammering();

	std::system("PAUSE");
}