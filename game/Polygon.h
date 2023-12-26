#pragma once
#include "Object2D.h"

class Polygon : public Object2D
{
public:
	Polygon(std::vector<sf::Vector2f> points = {}, sf::Vector2f position = {0,0}, sf::Vector2f movement = {0,0});
	virtual void draw(sf::RenderTarget& window) override;
	virtual ObjectType type() override;
	std::vector<sf::Vector2f> getPoints() const;
	void setPoints(std::vector<sf::Vector2f> points);

private:
	std::vector<sf::Vector2f> _points;
};
