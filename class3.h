#pragma once
#include "class1.h"

namespace Oleksiy{
    class class3 : public class1{
    public:
        void showInfo(){
            using namespace std;
            cout << "Class 3 from namespace Oleksiy" << endl;
        };
    };
    
};