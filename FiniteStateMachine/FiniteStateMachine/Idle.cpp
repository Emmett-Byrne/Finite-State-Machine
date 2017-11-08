#include "Idle.h"

Idle::Idle()
{
	if (!m_texture.loadFromFile("idle.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	m_sprite.setTexture(m_texture);
}

Idle::~Idle()
{
}

void Idle::jumping(Animation * a)
{
	std::cout << "Idling to Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Idling to Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	std::cout << "Idling to Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Idling to Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::swording(Animation * a)
{
	std::cout << "Idling to Swording" << std::endl;
	a->setCurrent(new Swording());
	delete this;
}

void Idle::render(sf::RenderWindow & window)
{
	window.draw(m_sprite);
}
