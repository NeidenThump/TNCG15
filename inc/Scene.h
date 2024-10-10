#pragma once
#include <vector>
#include "Camera.h"
#include "glm/glm.hpp"

/*
        (0, 6)__________(10, 6)     Z = 5 for roof and -5 for floor
          /                 \
         /                   \
        /                     \         ^ Y
     (-3, 0)                (13, 0)     |
        \                     /         |
         \                   /          |-----> X
          \_________________/            
       (0, -6)           (10, -6)      
*/


class Scene {
public:
    // Constructor
    Scene();

    // Adds a room in the scene
    void addRoom();

    // Add a light to the scene
    //void addLight(Light light);

    // Add a camera
    void addCamera(Camera camera);

    // Get the list of lights in the scene
    //const std::vector<Light>& getLights() const;

    // Get the list of cameras in the scene
    const std::vector<Camera>& getCameras() const;

    // Get a room baby
    //const std::vector<std::shared_ptr<Object>>& getTheRoom() const;

    //Add tetrahedra
    //void addTetra(Tetrahedron tetra);

    //Add Sphere
    //void addSphere(Sphere sphere);

private:
    static std::vector<glm::vec3> roomVertexTable;

    //std::vector<Lightsource> lights;   // List of lights in the scene
    std::vector<Camera> cameras; // List of cameras in the scene
    //std::vector<std::shared_ptr<Object>> theRoom;

};