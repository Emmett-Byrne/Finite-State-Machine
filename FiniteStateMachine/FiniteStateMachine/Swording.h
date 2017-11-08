#pragma once
#include "State.h"
#include "Idle.h"

class Swording : public State
{
public:
	Swording();
	~Swording();

	void idle(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;

};