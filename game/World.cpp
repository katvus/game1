#include "World.h"

void World::draw(sf::RenderTarget& window) 
{
	sf::RectangleShape background;
	background.setSize({ 200,200 });
	background.setPosition({ 0,0 });
	background.setFillColor(sf::Color::White);
	window.draw(background);
	for (auto elem : _objects)
	{
		elem.second.get()->draw(window);
	}
}

const std::map<std::string, std::shared_ptr<Object2D>>& World::getObjects() const 
{
	return _objects;
}

std::map<std::string, std::shared_ptr<Object2D>>& World::getObjects() 
{
	return _objects;
}

bool World::addObject(std::string name, std::shared_ptr<Object2D> object)
{
	object.get()->setName(name);
	return _objects.insert({ name, object }).second;
}

bool World::removeObject(const std::string& name)
{
	if (_objects[name] == nullptr) return false;
	return _objects.erase(name) > 0;
}

bool World::isEmpty(const std::string& name) {
	return _objects.find(name) != _objects.end();
}

std::shared_ptr<Object2D> World::findObject(const std::string& name)
{
	return (* _objects.find(name)).second;
}

const std::shared_ptr<Object2D> World::findObject(const std::string& name) const
{
	return (* _objects.find(name)).second;
}
