#include "Equipment.h"
#include"Lottery.h"
#include <ctime>

using namespace std;

int main(){
    /*Products::Sport::Equipment obj1("Мяч", 699.99, "Китай", 5, "Футбол", 1);
    obj1.show();
    ofstream file("Shop.txt");
    obj1.saveToFile(file);
    file.close();*/
    srand(time(0));
    Lottery itstep;
    itstep.addProduct(new Products::Sport::Equipment("Мяч", 699.99, "Китай", 5, "Футбол", 1));
    itstep.addProduct(new Products::Sport::Clothing("Кроссовки", 1999.99, "Адидас", 16, "Мужской", 39));
    itstep.addProduct(new Products::Fun::Game("Chess", 1002.0, "Classic", 8, 4));
    itstep.addProduct(new Products::Fun::Toy("Кукла", 399.99, "Барби", 2, 6));

    itstep.TakeGift();
}