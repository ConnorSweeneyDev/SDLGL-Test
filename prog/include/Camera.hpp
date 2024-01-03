#pragma once

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class Camera
{
    public:
        glm::mat4 getViewMatrix() const;
        
        void moveUp(float speed);
        void moveDown(float speed);
        void moveLeft(float speed);
        void moveRight(float speed);
        void moveForward(float speed);
        void moveBackward(float speed);
        
        void resetPosition();

        void init();

    private:
        glm::vec3 position;
        glm::vec3 direction;
        glm::vec3 up;
};
extern Camera camera;
