#pragma once
#include "Color.h"
#include <glm/vec3.hpp>

///Abstract base class -> Triangle, Rectangle
class Polygon
{
public:
	Polygon();
	~Polygon();
	
	//Returns the normal of the polygon, maybe calculate it using right hand rule???
	virtual glm::vec3 calcNormal() const = 0; //pure virtual function: must be implemented in subclasses
private:
	ColorDBL color;
};