#pragma once
#include "State.h"
#include "Idle.h"

class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();

	void idle(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;

};