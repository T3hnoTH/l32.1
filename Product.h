#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

namespace Products{
    class Product{
    protected:
        string name;
        float price;
        string manufacturer;
        int age;
    public:
        Product(){};
        Product(string uname,float uprice,string umanufacturer,int uage){};
        virtual ~Product(){};

        void setName(string uname){name = uname;};
        void setPrice(float uprice){price = uprice;};
        void setManufacturer(string umanufacturer){manufacturer = umanufacturer;};
        void setAge(int uage){age = uage;};

        string getName()const{return name;};
        float getPrice()const{return price;};
        string getManufacturer()const{return manufacturer;};
        int getAge()const{return age;};

        virtual void show()const = 0;
        virtual float calcPrice()const = 0;
        virtual void saveToFile(std::ofstream& file)const = 0;
        virtual void loadFromFile(std::ifstream& file) = 0;
    };
};