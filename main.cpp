#include "class2.h"
#include "class3.h"
#include "outsideClass.h"
using namespace std;

int main(){
    Oleksiy::class1 obj1;
    Oleksiy::class2 obj2;
    Oleksiy::class3 obj3;
    outsideClass obj4;

    obj1.showInfo();
    obj2.showInfo();
    obj3.showInfo();
    obj4.showInfo();
}