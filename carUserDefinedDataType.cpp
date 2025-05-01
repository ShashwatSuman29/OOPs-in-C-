#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int price;
    int seaters;
    string type;
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
    Car c1;
    c1.name = "BMW";
    c1.price = 1000000;
    c1.seaters = 5;
    c1.type = "Luxury";

    print(c1); 
    change(c1); 
    print(c1);



    // Car c2;
    // c2.name = "Tata";
    // c2.price = 500000;
    // c2.seaters = 5;
    // c2.type = "Budget";

    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seaters<<" "<<c1.type<< endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seaters<<" "<<c2.type<< endl;

    // print(c1);
    // print(c2);
};
