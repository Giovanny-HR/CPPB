
#ifndef HW3_CLASS_H
#define HW3_CLASS_H
//code here
#include "vc3D.h"

namespace  vc = namespaceVector;

class Vec3D{
public:
    float x,  y, z;
    Vec3D(float _x, float _y, float _z){
        x = _x;
        y = _y;
        z =_z;
    }

};

class Ray{
public:
    float xSup, ySup, zSup, xDir, yDir, zDir;
    Ray(float _xSup, float _ySup, float _zSup, float _xDir, float _yDir, float _zDir){
        xSup = _xSup;
        ySup = _ySup;
        zSup = _zSup;
        xDir = _xDir;
        yDir = _yDir;
        zDir = _zDir;
    }
};

class Sphere{
public:
    float x, y, z, radius;
    Sphere(float _x, float _y, float _z, float _radius){
        x = _x;
        y = _y;
        z = _z;
        radius = _radius;

//        float distFromRay (Ray const &ray) const
//        bool hit (Ray const &ray) const
//        Vec3D hitPoint(Ray const &ray);

    }
};
#endif //HW3_CLASS_H
