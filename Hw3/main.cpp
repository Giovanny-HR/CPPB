/*
 * Requirement
 *
 * Test-Specs
 *
 * Design
 *
 */


#include <iostream>


class Vec3D{

};

class  Ray{

};

class Sphere{

};

Sphere (float x, float y, float z, float radius);

float distFromRay (Ray const &ray) const

bool hit (Ray const &ray) const

Vec3D hitPoint (Ray const &ray) const

Sphere (-0.4, 0.23, -1, 0.4), Sphere (0.4,0.4,-1.2,0.3)
Sphere (0.7, -0.15, -1.5, 0.2)

Ray (-far, 0.23, -1, far, 0,0), Ray (0..,-far, -1.2, 0, far, 0)
Ray(0.7, -0.15, -far, 0, 0, far)


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
