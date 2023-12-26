#pragma once
#include "Player.h"
#include "const.h"

class Camera : public Player
{
public:
	explicit Camera(sf::Vector2f position, float fieldOfView = (PI / 2));
	void draw(sf::RenderTarget& window) override;
	void setFieldOfView(float angel);
	//bool cameraKeyboardControl(sf::RenderTarget& window);
private:
	float _direction = 0;
	float _fieldOfView;
};
