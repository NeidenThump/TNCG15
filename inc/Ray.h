#pragma once
#include <memory>
#include <glm/vec3.hpp>
#include "Color.h"
#include "Polygon.h"

class Ray {
private:
	glm::vec3 startVertex;
	glm::vec3 direction;
	//optional: end vertex

	//pointer to the surface?? //use shared_ptr or unique??????
	std::shared_ptr<Polygon> surface;
	ColorDBL color;

	//use shared_ptr instead of unique because a ray can be pointed to by multiple
	//rays (previous and next)
	std::shared_ptr<Ray> previous; 
	std::shared_ptr<Ray> next;

public:
	Ray() = default; 
	~Ray() = default;

};
