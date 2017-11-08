#include "Shoveling.h"

Shoveling::Shoveling()
{
	if (!m_texture.loadFromFile("shoveling.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shoveling to idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}