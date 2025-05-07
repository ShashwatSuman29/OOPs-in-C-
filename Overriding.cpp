#include <iostream>
using namespace std;

class Scooty
{
public:
    int topSpeed;
    float mileage;

     virtual void sound()
    {
        cout << "Scooty sound" << endl;
    }

private:
    float bootspace;
};

class Bike : public Scooty{
    public:
    int gears;

    void sound(){
        cout << "Bike sound" << endl;
    }
};


int main()
{
    Scooty* b = new Bike();
    b->sound(); // 
}