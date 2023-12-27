#pragma once

#include <vector>
#include "Interface.h"
#include "ObjectType.h"

/*!
* \brief independent object
*/
class Object2D : public IDrawObj
{
public:
	///creating an object by setting the current coordinates and coordinates of the position where it is moving
	explicit Object2D(sf::Vector2f position = { 0,0 }, sf::Vector2f movement = { 0,0 });
	///get object coordinate along the abscissa axis
	[[nodiscard]] float x() const; 
	///get object coordinate along the ordinate axis
	[[nodiscard]] float y() const;
	///get object coordinates 
	[[nodiscard]] sf::Vector2f getPosition() const;
	///set object coordinates 
	void setPosition(sf::Vector2f position); 
	[[nodiscard]] std::string getName() const;
	void setName(std::string name);

	///show the type of the object
	virtual ObjectType type() = 0; 
	virtual void draw(sf::RenderTarget& window) = 0;

protected:
	///current coordinates
	sf::Vector2f _position; 
	/// coordinates of the position where object is moving
	sf::Vector2f _movement;
	std::string _name;
};
