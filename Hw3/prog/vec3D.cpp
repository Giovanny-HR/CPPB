/*
 * TODO E funtion nan ku tin &v, v2 check nan pa wak si na meste wordu drecha pe function mes mes
 * vb add(const Vec3D &v, const Vec3D &v2)
 */
#include <iostream>
#include <cmath>
#include "vec3D.h"

namespace st = std;
namespace vector3DSpace {

//============Vector 3D Definitions
    //Constructor Here
    Vec3D::Vec3D(float x, float y, float z) :
            x(x), y(y), z(z) {}

    Vec3D Vec3D::vec3D(float x, float y, float z) {
        Vec3D Vector = {x, y, z};
        st::cout << Vector.x << " , " << Vector.y << " , " << Vector.z;
        return Vector;
    }

    void Vec3D::show(st::string label, Vec3D const &v) {
        st::cout << label << v.x << " , " << v.y << " , " << v.z;
    }

    void Vec3D::show(st::string label, float scalar) {
        st::cout << label << scalar;
    }

    void Vec3D::show() {
        st::cout << '\n';
    }

    //Remember to insert Minus Function

    Vec3D Vec3D::add(Vec3D const &v2) {
        auto addVector = Vec3D(x + v2.x, y + v2.y, z + v2.z);
        return addVector;
    }
//    Vec3D Vec3D::add(const Vec3D &v, const Vec3D &v2) {
//        auto addVector = Vec3D(v.x + v2.x, v.y + v2.y, v.z + v2.z);
//        return addVector;
//    }

    Vec3D Vec3D::sub(Vec3D const &v2) {
        auto subVector = Vec3D(x - v2.x, y - v2.y, z - v2.z);
        return subVector;
    }
//    Vec3D Vec3D::sub(Vec3D const &v, const Vec3D &v2) {
//        auto subVector = Vec3D(v.x - v2.x, v.y - v2.y, v.z - v2.z);
//        return subVector;
//    }

    Vec3D Vec3D::mul(float scalar) {
        auto mulVector = Vec3D(x * scalar, y * scalar, z * scalar);
        return mulVector;
    }
//    Vec3D Vec3D::mul(const Vec3D &v, float scalar) {
//        auto mulVector = Vec3D(v.x * scalar, v.y * scalar, v.z * scalar);
//        return mulVector;
//    }

    Vec3D Vec3D::div(float scalar) {
        auto divVector = Vec3D(x / scalar, y / scalar, z / scalar);
        return divVector;
    }
//    Vec3D Vec3D::div(const Vec3D &v, float scalar) {
//        auto divVector = Vec3D(v.x / scalar, v.y / scalar, v.z / scalar);
//        return divVector;
//    }

    float Vec3D::norm() {
        auto normVector = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        return normVector;
    }
//    float Vec3D::norm(const Vec3D &v) {
//        auto normVector = sqrt(pow(v.x,2) + pow(v.y, 2) + pow(v.z, 2));
//        return normVector;
//    }

    Vec3D Vec3D::unit(Vec3D const &v) {
        auto output = vec3D(0, 0, 0);
        output.x = v.x / v.x;
        output.y = v.y / v.x;
        output.z = v.z / v.x;
        return output;
    }

    float Vec3D::dot(Vec3D const &v2) {
        auto resultX = x * v2.x;
        auto resultY = y * v2.x;
        auto resultZ = z * v2.x;
        auto result = resultX + resultY + resultZ;
        return result;
    }

    Vec3D Vec3D::cross(Vec3D const &v2) {
        auto outputCross = vec3D(0, 0, 0);
        outputCross.x = (y * v2.z) - (z * v2.y);
        outputCross.y = (z * v2.x) - (x * v2.z);
        outputCross.z = (x * v2.y) - (y * v2.x);
        return outputCross;
    }
//    Vec3D Vec3D::cross(const Vec3D &v, const Vec3D &v2) {
//        auto outputCross = vec3D(0,0,0);
//        outputCross.x = (v.y * v2.z) - (v.z * v2.y);
//        outputCross.y = (v.z * v2.x) - (v.x * v2.z);
//        outputCross.z = (v.x * v2.y) - (v.y * v2.x);
//        return outputCross;
//    }

//============Ray Definitions
    Ray::Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir) :
            support(xSup, ySup, zSup), direction(xDir, yDir, zDir) {}

//============Sphere Definitions
    Sphere::Sphere(float x, float y, float z) :
            center(x, y, z), radius(radius) {}

    float Sphere::distFromRay(Ray &ray) const {
        //code here
        return ray.support.sub(center).cross(ray.direction).norm();
    }

    bool Sphere::hit(Ray &ray) const {
        //code Here
//        distFromRay(ray) center ? true:flase;
        if (distFromRay(ray) <= 0) {
            return true;
        } else {
            return false;
        }
    }

    Vec3D Sphere::hitPoint(const Ray &ray) const {
        //code here

    }
}