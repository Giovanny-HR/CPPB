
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






#endif //HW3_TEST_H
