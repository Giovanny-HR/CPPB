
#ifndef HW3_VEC3D_H
#define HW3_VEC3D_H

// code here

#include <iostream>
#include <cmath>

namespace st = std;

int test(){
    st::cout<< "Header test in Vec3D.h file";
    return 0;
}
namespace  vector3D{
    //Vec3D struct type
    struct Vec3D {
        float x, y, z;
    };

// Function that creates, initializes & returns variables of this type.
    Vec3D vec3D (float x, float y, float z){
        //creates, initializes & returns variables of this type
        Vec3D Vector = {x,y,z};
        st::cout << Vector.x << " , " << Vector.y << " , " << Vector.y ;
        return Vector;
    }

    void show (st::string label, Vec3D const &self){
        //print in terminal, with label
        st::cout << label << self.x << " , " << self.y << " , " << self.z ;
//    st::cout << '\n' << std::endl;
    }

    void show (st::string label, float scalar){
        //prints floating points scalars in a console window, labeled with their name and terminated with new line
        st::cout << label <<  scalar;
//    st::cout << '\n' << st::endl;
    }

    void show(){
        //Print new Line
        st:: cout << '\n';
    }

    Vec3D minus (Vec3D const & self){
        //returns a vector pointing the other way as self
        auto minVector = vec3D(self.x * 1, self.y * -1, self.z * -1);
        return minVector;
    }

    Vec3D add ( Vec3D const & self, Vec3D const & other){
        // returns the sum of self and other
        auto addVector = vec3D(self.x + other.x, self.y + other.y, self.z + other.z);
        return addVector;
    }

    Vec3D sub ( Vec3D const & self, Vec3D const & other){
        // returns the difference of self and other
        auto subVector = vec3D(self.x - other.x, self.y - other.y, self.z - other.z);
        return subVector;
    }

    Vec3D mul ( Vec3D const & self, float scalar){
        //returns the product of self and scalar
        auto mulVector = vec3D(self.x * scalar, self.y * scalar,self.z * scalar);
        return mulVector;
    }

    Vec3D div (Vec3D const & self, float scalar){
        //returns the quotient of self and scalar
        auto divVector = vec3D(self.x / scalar, self.y / scalar, self.z / scalar);
        return divVector;
    }

    float norm ( Vec3D const & self){
        // returns the norm(length) of self
        auto normVector = sqrt(pow(self.x,2) + pow(self.y,2) + pow(self.z,2));
        return normVector;
    }

    Vec3D unit (Vec3D const & self){
        // returns vector with the same direction as itself, but with length 1
        auto output = vec3D(0,0,0);
        output.x = self.x / self.x;
        output.y = self.y / self.x;
        output.z = self.z / self.x;
        return output;
    }

    float dot(Vec3D const & self, Vec3D const& other){
        //returns the inproduct(dot product) of self and other
        auto resultX = self.x * self.x;
        auto resultY = self.y * self.x;
        auto resultZ = self.z * self.x;
        auto result = resultX + resultY +resultZ;
        return result;
    }

    Vec3D cross (Vec3D const & self, Vec3D const & other){
        //returns the out product (cross product) of self and other
        auto outputCross = vec3D(0,0,0);
        outputCross.x = (self.y * other.z) - (self.z * other.y);
        outputCross.y = (self.z * other.x) - (self.x * other.z);
        outputCross.z = (self.x * other.y) - (self.y * other.x);
        return outputCross;
    }
}



#endif //HW3_VEC3D_H
