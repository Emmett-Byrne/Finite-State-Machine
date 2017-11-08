#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	if (!m_texture.loadFromFile("idle.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	/*if (!m_idle.loadFromFile("idle.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	if (!m_shoveling.loadFromFile("shoveling.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	if (!m_hammering.loadFromFile("hammering.jpg"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	if (!m_walking.loadFromFile("walking.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	if (!m_jumping.loadFromFile("jumping.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}

	if (!m_swording.loadFromFile("swording.png"))
	{
		std::string s("Error loading texture");
		throw std::exception(s.c_str());
	}*/

	current = new Idle();
	m_sprite.setTexture(m_texture);
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::shoveling()
{
	current->shoveling(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::swording()
{
	current->swording(this);
}

void Animation::render(sf::RenderWindow & window)
{
	current->render(window);
}
