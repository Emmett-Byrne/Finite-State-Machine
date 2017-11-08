#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
		{ current = s; }
	void idle();
	void shoveling();
	void hammering();
	void walking();
	void jumping();
	void swording();

	void render(sf::RenderWindow & window);

	sf::Sprite m_sprite;
	sf::Texture m_texture;
private:
	/*sf::Texture m_idle;
	sf::Texture m_shoveling;
	sf::Texture m_hammering;
	sf::Texture m_walking;
	sf::Texture m_jumping;
	sf::Texture m_swording;*/
};