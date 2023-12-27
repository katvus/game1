#include "Camera.h"
#include "const.h"

Camera::Camera(sf::Vector2f position, float fieldOfView) : Player(position)
{
	setFieldOfView(fieldOfView);
}

void Camera::setFieldOfView(float angel)
{
	if (angel < 0) _fieldOfView = pi / 4;
	else if (angel > pi) _fieldOfView = pi;
	else _fieldOfView = angel;
}

void Camera::draw(sf::RenderTarget& window)
{
	sf::CircleShape circle;
	circle.setRadius(collision_distance);
	circle.setOutlineColor(outline_camera_color);
	circle.setFillColor(fill_camera_color);
	circle.setPosition(x() - collision_distance, y() - collision_distance);

	float left =_direction - _fieldOfView / 2;
	float right =_direction + _fieldOfView / 2;
	float delta = _fieldOfView / (convex_namber * 2);

	sf::ConvexShape triangle;
	triangle.setPointCount(convex_namber + 1);
	//triangle.setPoint(0, sf::Vector2f(0, 0));
	for (int i = 0; i <= convex_namber; i++)
	{
		triangle.setPoint(i , sf::Vector2f(-radius_view * sin(left - delta * i) + x(), radius_view * cos(left - delta * i) + y()));
	}
	triangle.setPosition((float)x(), (float)y());
	triangle.setFillColor(sf::Color::Blue);
	triangle.setOutlineColor(sf::Color::Black);
	window.draw(triangle);
	window.draw(circle);
}
