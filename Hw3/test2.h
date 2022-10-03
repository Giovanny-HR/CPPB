
#include <iostream>
#include <cmath>

namespace st = std;

namespace Vector3D{
    class Vec3D{
    protected:
        float x, y, z ;
    public:
        static void method(){
            st::cout<<"Print \n";
        }
        Vec3D(float _x, float _y, float _z){
            x = _x;
            y = _y;
            z = _z;
//        st::cout<<"X: " << x << " Y: " << y << " Z: " << z;
        }

        static void show (st::string label, float scalar){
            st::cout << label <<  scalar;
//    st::cout << '\n' << st::endl;
        }

        static void show (st::string label, Vec3D const &v){
            st::cout << label << v.x << " , " << v.y << " , " << v.z ;
//    st::cout << '\n' << std::endl;
        }

        static void show(){
            //Print new Line
            st:: cout << '\n';
        }

        static Vec3D minus (Vec3D const & v){
            auto minVector = Vec3D(v.x * 1, v.y * -1, v.z * -1);
            return minVector;
        }
        static Vec3D add (Vec3D const & v, Vec3D const & v2){
            auto addVector = Vec3D(v.x + v2.x, v.y + v2.y, v.z + v2.z);
            return addVector;
        }

        static Vec3D sub (Vec3D const & v, Vec3D const & v2){
            auto subVector = Vec3D(v.x - v2.x, v.y - v2.y, v.z - v2.z);
            return subVector;
        }

        static Vec3D mul (Vec3D const & v, float scalar){
            auto mulVector = Vec3D(v.x * scalar, v.y * scalar, v.z * scalar);
            return mulVector;
        }

        static Vec3D div (Vec3D const & v, float scalar){
            auto divVector = Vec3D(v.x / scalar, v.y / scalar, v.z / scalar);
            return divVector;
        }

        static float norm ( Vec3D const & v){
            auto normVector = sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
            return normVector;
        }

        static Vec3D unit (Vec3D const & v){
            auto output = Vec3D(0,0,0);
            output.x = v.x / v.x;
            output.y = v.y / v.x;
            output.z = v.z / v.x;
            return output;
        }

        static float dot(Vec3D const & v, Vec3D const& v2){
            auto resultX = v.x * v.x;
            auto resultY = v.y * v.x;
            auto resultZ = v.z * v.x;
            auto result = resultX + resultY +resultZ;
            return result;
        }

        static Vec3D cross (Vec3D const & v, Vec3D const & v2){
            auto outputCross = Vec3D(0,0,0);
            outputCross.x = (v.y * v2.z) - (v.z * v2.y);
            outputCross.y = (v.z * v2.x) - (v.x * v2.z);
            outputCross.z = (v.x * v2.y) - (v.y * v2.x);
            return outputCross;
        }
    friend class Ray;
    };

}

namespace Ray{
    class Ray{
    protected:
        float xSup, ySup, zSup, xDir, yDir, zDir;
    public:
        Vector3D::Vec3D support(float xSup, float ySup, float zSup){
            //Steun Vector
        }
        Vector3D::Vec3D direction(float xDir, float yDir, float zDir){
            //Richting Vector
        }

        Ray(float _xSup, float _ySup, float _zSup, float _xDir, float _yDir, float _zDir){
            xSup = _xSup;
            ySup = _ySup;
            zSup = _zSup;
            xDir = _xDir;
            yDir = _yDir;
            zDir = _zDir;
        }
    };
}

class Sphere{
protected:
    float x, y, z;
public:
    Vector3D::Vec3D center(float x, float y, float z){}

    Vector3D::Vec3D radius(float radius){}

    Sphere(float _x, float _y, float _z, float _radius){
        x = _x;
        y = _y;
        z = _z;
    }
};
