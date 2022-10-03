
#ifndef HW3_TEST_H
#define HW3_TEST_H
// code here

#pragma  once

#include <iostream>

namespace  st = std;

namespace  testNameSpace{
    void print(){
        st::cout<< "Hello World!!";
    }
    class A {
        int x;
    public:

        A(){
            x = 10;
        }
        void test(){
            st::cout<<"This is a print statement of A";
        }
        friend class B; //friend class
    };

    class B{
    public:
        void display(A &t){
            st::cout<< " The value of x = " << t.x;
        }
    };

}
class MyClass{ // The class
public:     // Access specifier
    void method(){// Method/Function defined inside the class
        st::cout<<"Method Printed!";
    }
};

int main(){
    MyClass myObj; //Creat method
    myObj.method();//Call Method
    return 0;
}





#endif //HW3_TEST_H
