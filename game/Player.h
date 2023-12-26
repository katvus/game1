#pragma once
#include "Circle.h"
#include "const.h"

class Player : public Circle
{
public:
	Player(sf::Vector2f position);
	virtual ObjectType type() override;
};
