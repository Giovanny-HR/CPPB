/*
 * -----------------------REQUIREMENTS---------------------------------------------------
 * Ray: Has 2 fields of type Vec3D
 * -----------------------TEST SPECS-----------------------------------------------------
 * -----------------------DESIGN---------------------------------------------------------
 */


#include <iostream>
#include "prog/vc3D.h"

namespace st = std;

class Vec3D{
    //code here

};

class Ray{
    //code here
    Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir);
};

class Sphere{
    //code here
public: //Why make public?
    Sphere(float x, float y, float z, float radius);
    float distFromRay (Ray const &ray) const;
    bool hit (Ray const &ray) const;

    Vec3D hitPoint(Ray const &ray)const;
 };




int main(){
    Sphere (-0.4, 0.23, -1, 0.4), Sphere (0.4,0.4,-1.2,0.3);
    Sphere (0.7, -0.15, -1.5, 0.2);

    Ray (-far, 0.23, -1, far, 0,0), Ray (0..,-far, -1.2, 0, far, 0);
    Ray(0.7, -0.15, -far, 0, 0, far);

    return 0;
}

