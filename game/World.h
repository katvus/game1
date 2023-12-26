#pragma once
#include <map>
#include <memory>
#include "Object2D.h"

class World
{
public:
	void draw(sf::RenderTarget& window);
	const std::map<std::string, std::shared_ptr<Object2D>>& getObjects() const;
	std::map<std::string, std::shared_ptr<Object2D>>& getObjects();

	bool addObject(std::string name, std::shared_ptr<Object2D> object);
	bool removeObject(const std::string& name);
	bool isEmpty(const std::string& name);
	std::shared_ptr<Object2D> findObject(const std::string& name);
	const std::shared_ptr<Object2D> findObject(const std::string& name) const;

private:
	std::map<std::string, std::shared_ptr<Object2D>> _objects;
};
