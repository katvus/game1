#include"Player.h"

Player::Player(sf::Vector2f position) : Circle(COLLISION_DISTANCE, position)
{
}

ObjectType Player::type()
{
	return ObjectType::Player;
}
