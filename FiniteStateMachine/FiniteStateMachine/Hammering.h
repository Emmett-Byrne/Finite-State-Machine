#pragma once
#include "State.h"
#include "Idle.h"

class Hammering : public State
{
public:
	Hammering();
	~Hammering();

	void idle(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;

};