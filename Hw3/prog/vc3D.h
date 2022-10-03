
#ifndef HW3_VC3D_H
#define HW3_VC3D_H

// code here

#include <iostream>
#include <cmath>

namespace st = std;

int test(){
    st::cout<< "Header test in Vec3D.h file";
    return 0;
}
namespace  namespaceVector{
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

    void show (st::string label, Vec3D const &v){
        //print in terminal, with label
        st::cout << label << v.x << " , " << v.y << " , " << v.z ;
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

    Vec3D minus (Vec3D const & v){
        //returns a vector pointing the other way as v
        auto minVector = vec3D(v.x * 1, v.y * -1, v.z * -1);
        return minVector;
    }

    Vec3D add (Vec3D const & v, Vec3D const & v2){
        // returns the sum of v and v2
        auto addVector = vec3D(v.x + v2.x, v.y + v2.y, v.z + v2.z);
        return addVector;
    }

    Vec3D sub (Vec3D const & v, Vec3D const & v2){
        // returns the difference of v and v2
        auto subVector = vec3D(v.x - v2.x, v.y - v2.y, v.z - v2.z);
        return subVector;
    }

    Vec3D mul (Vec3D const & v, float scalar){
        //returns the product of v and scalar
        auto mulVector = vec3D(v.x * scalar, v.y * scalar, v.z * scalar);
        return mulVector;
    }

    Vec3D div (Vec3D const & v, float scalar){
        //returns the quotient of v and scalar
        auto divVector = vec3D(v.x / scalar, v.y / scalar, v.z / scalar);
        return divVector;
    }

    float norm ( Vec3D const & v){
        // returns the norm(length) of v
        auto normVector = sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
        return normVector;
    }

    Vec3D unit (Vec3D const & v){
        // returns vector with the same direction as itself, but with length 1
        auto output = vec3D(0,0,0);
        output.x = v.x / v.x;
        output.y = v.y / v.x;
        output.z = v.z / v.x;
        return output;
    }

    float dot(Vec3D const & v, Vec3D const& v2){
        //returns the inproduct(dot product) of self and other
        auto resultX = v.x * v.x;
        auto resultY = v.y * v.x;
        auto resultZ = v.z * v.x;
        auto result = resultX + resultY +resultZ;
        return result;
    }

    Vec3D cross (Vec3D const & v, Vec3D const & v2){
        //returns the out product (cross product) of v and v2
        auto outputCross = vec3D(0,0,0);
        outputCross.x = (v.y * v2.z) - (v.z * v2.y);
        outputCross.y = (v.z * v2.x) - (v.x * v2.z);
        outputCross.z = (v.x * v2.y) - (v.y * v2.x);
        return outputCross;
    }
}



#endif //HW3_VC3D_H
