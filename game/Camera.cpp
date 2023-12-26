#include "Camera.h"

#define FILED_OF_VEW_COLOR {255, 67, 67, 0}
#define CONVEX_NUMBER 100
#define RADIUS_VIEW 10

Camera::Camera(sf::Vector2f position, float fieldOfView) : Player(position)
{
	setFieldOfView(fieldOfView);
}


void Camera::setFieldOfView(float angel)
{
	if (angel < 0) _fieldOfView = PI / 4;
	else if (angel > PI) _fieldOfView = PI;
	else _fieldOfView = angel;
}

void Camera::draw(sf::RenderTarget& window)
{
	sf::CircleShape circle;
	circle.setRadius(COLLISION_DISTANCE);
	circle.setOutlineColor(OUTLINE_CAMERA_COLOR);
	circle.setFillColor(FILL_CAMERA_COLOR);
	circle.setPosition(x() - COLLISION_DISTANCE, y() - COLLISION_DISTANCE);

	float left =_direction - _fieldOfView / 2;
	float right =_direction + _fieldOfView / 2;
	float delta = _fieldOfView / (CONVEX_NUMBER * 2);

	sf::ConvexShape triangle;
	triangle.setPointCount(CONVEX_NUMBER + 1);
	//triangle.setPoint(0, sf::Vector2f(0, 0));
	for (int i = 0; i <= CONVEX_NUMBER; i++)
	{
		triangle.setPoint(i , sf::Vector2f(-RADIUS_VIEW * sin(left - delta * i) + x(), RADIUS_VIEW * cos(left - delta * i) + y()));
	}
	triangle.setPosition((float)x(), (float)y());
	triangle.setFillColor(sf::Color::Blue);
	triangle.setOutlineColor(sf::Color::Black);
	window.draw(triangle);
	window.draw(circle);
}
