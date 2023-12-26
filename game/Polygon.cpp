#include"Polygon.h"

Polygon::Polygon(std::vector<sf::Vector2f> points, sf::Vector2f position, sf::Vector2f movement) :_points(points), Object2D(position, movement)
{
}

std::vector<sf::Vector2f> Polygon::getPoints() const
{
	return _points;
}

void Polygon::setPoints(std::vector<sf::Vector2f> points)
{
	_points = points;
}

ObjectType Polygon::type()
{
	return ObjectType::Polygon;
}

void Polygon::draw(sf::RenderTarget& window)
{
	sf::ConvexShape polygon;
	polygon.setPointCount(getPoints().size());
	int i = 0;
	for (auto elem : getPoints())
	{
		polygon.setPoint(i++, elem);
	}
	polygon.setFillColor(sf::Color::Blue);
	window.draw(polygon);
}
