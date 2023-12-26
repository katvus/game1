#include "Circle.h"

Circle::Circle(float radius, sf::Vector2f position, sf::Vector2f movement) :_radius(radius), Object2D(position, movement)
{
}

ObjectType Circle::type()
{
	return ObjectType::Circle;
}

void Circle::draw(sf::RenderTarget& window)
{
	sf::CircleShape circle(_radius);
	circle.setFillColor(sf::Color::Blue);
	window.draw(circle);
}
