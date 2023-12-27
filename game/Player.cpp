#include"Player.h"

Player::Player(sf::Vector2f position) : Circle(collision_distance, position)
{
}

ObjectType Player::type()
{
	return ObjectType::Player;
}
