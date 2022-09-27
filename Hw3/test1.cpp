

#include <iostream>
#include "test.h"

namespace st = std;
namespace tn = testNameSpace;



int main(){
    tn::print();
    tn:: A _a;
    tn:: B _b;
    _b.display(_a);
    return 0;
}