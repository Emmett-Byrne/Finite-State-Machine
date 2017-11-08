#include "Hammering.h"

Hammering::Hammering()
{
	if (!m_texture.loadFromFile("hammering.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}
