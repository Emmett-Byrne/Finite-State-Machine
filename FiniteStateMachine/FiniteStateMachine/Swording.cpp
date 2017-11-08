#include "Swording.h"

Swording::Swording()
{
	if (!m_texture.loadFromFile("swording.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Swording::~Swording()
{
}

void Swording::idle(Animation * a)
{
	std::cout << "Swording to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swording::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}
