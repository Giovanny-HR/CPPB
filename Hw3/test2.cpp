#include <iostream>
#include "test2.h"

namespace st = std;



int main(){
    Vec3D myVec = Vec3D(1,5,7);
    Vec3D myVec2 = Vec3D(2,4,8);
    Vec3D::method();
    Vec3D::show("MyVec: ", myVec);
    Vec3D minV = Vec3D::minus(myVec);
    Vec3D::show("MinV: ", minV);

    return 0;
}
