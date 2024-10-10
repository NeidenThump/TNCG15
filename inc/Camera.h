#pragma once
#include <glm/vec3.hpp>

/*


  c4(0,-1,1) ______________ c3(0,1,1)
			|	           |				^ Z
			|	(-1,0,0)   |       			|
			|	    *	   |				|
			|	   Ögat	   |				|-----> Y    X pekar "ut" ur skärmen
  c1(0,-1,-1)-------------- c2(0,1,-1)

*/

//Represents the virtual camera through which the scene is rendered
class Camera {
private:
	//The camera's 4 corners
	glm::vec3 c1, c2, c3, c4;

public:
	Camera() : 
		c1(0,-1,-1),c2(0,1,-1){};
	//Camera(); //array size in 2D

};