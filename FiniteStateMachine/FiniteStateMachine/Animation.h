#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
		{ current = s; }
	void idle();
	void shoveling();
	void hammering();
	void walking();
	void jumping();
	void swording();

	void render(sf::RenderWindow & window);
};