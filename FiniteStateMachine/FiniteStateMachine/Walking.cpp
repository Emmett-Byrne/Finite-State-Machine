#include "Walking.h"

Walking::Walking()
{
	if (!m_texture.loadFromFile("walking.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Walking to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}


void Walking::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}
