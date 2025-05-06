#pragma once
#include "class1.h"

namespace Oleksiy{
    class class2 : public class1{
    public:
        void showInfo(){
            using namespace std;
            cout << "Class 2 from namespace Oleksiy" << endl;
        };
    };
    
};