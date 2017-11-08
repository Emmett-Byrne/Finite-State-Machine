
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

void render();

Animation fsm;
sf::RenderWindow window(sf::VideoMode(800, 600, 32), "FSM", sf::Style::Default);
int i = 0;

int main()
{
	render();
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
			render();
		}
		else
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 0;
			render();
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
