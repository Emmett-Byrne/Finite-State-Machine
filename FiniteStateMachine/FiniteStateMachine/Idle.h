#pragma once
#include "State.h"

class Jumping;
class Walking;
class Shoveling;
class Hammering;
class Swording;

class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);
	void swording(Animation* a);

	void render(sf::RenderWindow & window);

private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;
};

#include "Jumping.h"
#include "Walking.h"
#include "Shoveling.h"
#include "Hammering.h"
#include "Swording.h"