#pragma once
#include <memory>
#include <glm/vec3.hpp>
#include "Color.h"

class Ray {
private:
	glm::vec3 startVertex;
	glm::vec3 direction;
	//pointer to the surface??
	ColorRGB color;
	std::unique_ptr<Ray> previous;
	std::unique_ptr<Ray> next;

public:
	Ray() = default;
	~Ray() = default;

};
