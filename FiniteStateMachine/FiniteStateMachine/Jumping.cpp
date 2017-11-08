#include "Jumping.h"

Jumping::Jumping()
{
	if (!m_texture.loadFromFile("jumping.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	std::cout << "jumping to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}