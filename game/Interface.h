#pragma once
#include <SFML/Graphics.hpp>

/*!
* \brief interface for displaying all possible objects on the screen
*/
class IDrawObj
{
public:
	virtual ~IDrawObj() {};
	virtual void draw(sf::RenderTarget& window) = 0; ///draw object on the screen 
};
