#pragma once
#include "Player.h"
#include "const.h"

/*!
* \brief restricts and shows the area that the player sees
*/

class Camera : public Player
{
public:
	explicit Camera(sf::Vector2f position, float fieldOfView = (pi / 2));
	void draw(sf::RenderTarget& window) override;
	/// setting the area that the player sees
	void setFieldOfView(float angel);
private:
	/// the direction in which the player is looking
	float _direction = 0;
	/// the area that the player sees
	float _fieldOfView;
};
