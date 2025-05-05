#include<iostream>
using namespace std;

class Scooty {
   public:
    int topSpeed;
    int mileage;
    
    private:
    int bootSpace;
    
};

class Bike : public Scooty {
    public:
    int gears;
};

int main (){
    Bike b1;
    b1.topSpeed = 100;
    b1.mileage = 50;
    b1.gears = 5;
    b1.bootSpace = 10;
    
    cout << "Top Speed: " << b1.topSpeed << endl;
    cout << "Mileage: " << b1.mileage << endl;
    cout << "Gears: " << b1.gears << endl;
    
    return 0;
}