#include "Plane.h"

Plane::Plane(glm::vec3 a, glm::vec3 b)
{
	normal = a;
	point = b;
	shapeID = 2;
}

Plane::~Plane(){}
