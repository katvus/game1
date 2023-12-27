#pragma once
#include "Object2D.h"

/*!
* \brief object which can drawing as circle
*/

class Circle : public Object2D
{
public:
	explicit Circle(float radius, sf::Vector2f position = { 0,0 }, sf::Vector2f movement = { 0,0 });
	void draw(sf::RenderTarget& window) override;
	virtual ObjectType type() override;

private:
	float _radius;
};
