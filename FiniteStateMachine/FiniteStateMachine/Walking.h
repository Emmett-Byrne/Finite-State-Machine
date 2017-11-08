#pragma once
#include "State.h"
#include "Idle.h"

class Walking : public State
{
public:
	Walking();
	~Walking();

	void idle(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;

};