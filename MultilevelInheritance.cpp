#include<iostream>
using namespace std;
 
class Vehicle{
    public:
        int topSpeed;
        float mileage;
        string fuel;
};

class TwoWheeler: public Vehicle{
    public:
        int wheels;
        string type;
};

class Fourwheeler: public Vehicle{
    public:
        int wheels;
        string type;
};

class bike: public TwoWheeler{
    public:
        string brand;
        string model;
};

class car: public Fourwheeler{
    public:
        string brand;
        string model;
};
int main (){

}   