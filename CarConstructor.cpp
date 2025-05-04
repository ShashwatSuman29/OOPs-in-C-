#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int price;
    int seaters;
    string type;

    Car(int p, int s, string t, string n) // parameterized constructor
    {
        price = p;
        seaters = s;
        type = t;
        name = n;
    }
};

void print(Car c) // creating a function to print the details.
{
    cout << c.name << " " << c.price << " " << c.seaters << " " << c.type << endl;
}

void change (Car& c){ // passing by reference to change the value of the object.
    c.name = "Audi";
}
int main()
{
    Car c1 (150000, 5, "Luxury", "BMW"); 
    print(c1);
    change(c1); 
    print(c1); 
  
   
};
