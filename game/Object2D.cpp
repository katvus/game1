#include "Object2D.h"

Object2D::Object2D(sf::Vector2f position, sf::Vector2f movement) : _position(position), _movement(movement)
{
}

float Object2D::x() const 
{ 
	return _position.x; 
}

float Object2D::y() const {
	return _position.y;
}

sf::Vector2f Object2D::getPosition() const {
	return _position;
}

void Object2D::setPosition(sf::Vector2f position)
{
	_position = position;
}

std::string Object2D::getName() const {
	return _name;
}

void Object2D::setName(std::string name) {
	_name = name;
}
