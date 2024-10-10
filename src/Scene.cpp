#include "Scene.h"

//Initialize static variable
std::vector<glm::vec3> Scene::roomVertexTable = {
	glm::vec3(-3,0,5), glm::vec3(0,6,5), glm::vec3(10,6,5),
	glm::vec3(13,0,5), glm::vec3(10,-6,5), glm::vec3(0,-6,5),
	glm::vec3(-3,0,-5), glm::vec3(0,6,-5), glm::vec3(10,6,-5),
	glm::vec3(13,0,-5), glm::vec3(10,-6,-5), glm::vec3(0,-6,-5)
};

Scene::Scene() {
	//Create the scene by 
}