#include "Equipment.h"
using namespace std;

int main(){
    Products::Sport::Equipment obj1("Мяч", 699.99, "Китай", 5, "Футбол", 1);
    obj1.show();
    ofstream file("Shop.txt");
    obj1.saveToFile(file);
    file.close();
}