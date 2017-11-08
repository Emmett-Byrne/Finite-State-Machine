#pragma once
#include "State.h"
#include "Idle.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();

	void idle(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;

};