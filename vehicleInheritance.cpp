#include <iostream>
using namespace std;

class Vehicle
{
public:
    int topSpeed;
    int mileage;
    string fuel;
};

class Car : public Vehicle
{
public:
    bool sunroof;
};

class Bike : public Vehicle{

};

class Truck : public Vehicle{

};


void printVehicleInfo(Vehicle v)
{
    cout << "Top Speed: " << v.topSpeed << endl;
    cout << "Mileage: " << v.mileage << endl;
    cout << "Fuel: " << v.fuel << endl;
};
int main()
{
    Bike b1;
    b1.topSpeed = 100;
    b1.mileage = 50;
    b1.fuel = "Petrol";
  

    Car c1;
    c1.topSpeed = 150;
    c1.mileage = 20;
    c1.fuel = "Diesel";
    c1.sunroof = true;

    Truck t1;
    t1.topSpeed = 80;
    t1.mileage = 10;
    t1.fuel = "Diesel";

    printVehicleInfo(b1);
    printVehicleInfo(c1);
    printVehicleInfo(t1);
}