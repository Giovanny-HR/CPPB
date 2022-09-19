/*
 * //--------------REQUIREMENTS-------------------------------
 * Create a program that declares a struct type Vec3D ??
 * Create a function with different types of signatures
 *
 * //--------------TESTS PECS---------------------------------
 * //--------------DESIGN-------------------------------------
 * First:
 * Create a vector with 3 components (struct)
 * Create a function signature that creates, initializes & returns variables of this type.
 */

#include <iostream>
#include <cmath>

namespace st = std;

//Vec3D struct type
struct Vec3D {
    float x, y, z;
};

// Function that creates, initializes & returns variables of this type.
Vec3D vec3d (float x, float y, float z){
    //creates, initializes & returns variables of this type
}

void show (st::string label, float scalar){
    //prints floating points scalars in a console window, labeled with their name and terminated with new line
}

//Print new Line
void show(){
    st:: cout << '\n';
}

//
Vec3D minus (Vec3D const & self){
    //returns a vector pointing the other way as self
}

//
Vec3D add ( Vec3D const & self, Vec3D const & other){
    // returns the sum of self and other
}

//
Vec3D sub ( Vec3D const & self, Vec3D const & other){
    // returns the difference of self and other

}

//
Vec3D mul ( Vec3D const & self, Vec3D const & other){
    //returns the product of self and scalar
}

//
Vec3D div (Vec3D const & self, float scalar){
    //returns the quotient of self and scalar
}

//
float norm ( Vec3D const & self){
    // returns the norm(length) of self
}

//
Vec3D unit (Vec3D const & self){
    // returns vector with the same direction as itself, but with length 1
}

//
float dot(Vec3D const & self, Vec3D const& other){
    //returns the inproduct(dot product) of self and other
}

//
Vec3D cross (Vec3D const & self, Vec3D const & other){
    //returns the out product (cross product) of self and other
}

//
int main(){
    //Tests all these functions in accordance with the test specs you have set up

    return 0;
}