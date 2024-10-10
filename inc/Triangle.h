#pragma once
#include "Polygon.h"
#include <array>

class Triangle : public Polygon
{
public:
	Triangle();
	~Triangle();

	glm::vec3 calcNormal();
private:
	std::array<glm::vec3,3> vertices; //fixed size
};

