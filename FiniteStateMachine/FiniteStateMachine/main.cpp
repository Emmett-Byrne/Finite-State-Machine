
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib")
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib")
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 

#include <iostream>
#include "Animation.h"
#include <thread>
#include <chrono>
#include <stdlib.h>
#include <time.h>

void render();

Animation fsm;
sf::RenderWindow window(sf::VideoMode(800, 600, 32), "FSM", sf::Style::Default);
int i = 0;

int main()
{
	srand(time(NULL));
	render();
	while (true)
	{
		i = rand() % 5;
		if (i == 0)
		{
			fsm.jumping();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));

			fsm.idle();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		if (i == 1)
		{
			fsm.walking();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));

			fsm.idle();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		if (i == 2)
		{
			fsm.shoveling();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));

			fsm.idle();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		if (i == 3)
		{
			fsm.hammering();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));

			fsm.idle();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		if (i == 4)
		{
			fsm.swording();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));

			fsm.idle();
			render();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
	}

	std::system("PAUSE");
}

void render()
{
	window.clear(sf::Color::White);

	fsm.render(window);

	window.display();
}
