#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "ObjectType.h"

class Object2D//abstarct
{
public:
	Object2D(sf::Vector2f position = { 0,0 }, sf::Vector2f movement = { 0,0 });
	[[nodiscard]] float x() const;
	[[nodiscard]] float y() const;
	[[nodiscard]] sf::Vector2f getPosition() const;
	void setPosition(sf::Vector2f position);
	[[nodiscard]] std::string getName() const;
	void setName(std::string name);

	virtual ObjectType type() = 0;
	virtual void draw(sf::RenderTarget& window) = 0;

protected:
	sf::Vector2f _position;
	sf::Vector2f _movement;
	std::string _name;
};
