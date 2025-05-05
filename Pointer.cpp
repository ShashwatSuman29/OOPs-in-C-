#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
};

void change(Cricketer *c)
{
    // (*c).average = 70;
    c->average = 70; // modifcation of average using pointer
}

int main()
{
    Cricketer c1("Sachin", 10000, 50);
    Cricketer c2("Dravid", 5000, 40);

    // int x = 4;
    // int *p = &x;
    // cout << x << endl;  // 4
    // cout << &x << endl; // address of x
    // cout << p << endl;  // address of x
    // cout << *p << endl; // 4
    // *p = 100; // change value of x using pointer

    // Cricketer *p1 = &c1; // pointer to c1
    // cout<< c1.name << endl; // Sachin
    // cout <<(*p1).name << endl; // Sachin using pointers (c1.runs)
    // (*p1).average = 70; //modifcation of average using pointer
    // cout << c1.average << endl;

    Cricketer *p1 = &c1;
    cout << c1.average << endl;
    cout << p1->average << endl;
    p1->average = 70;
    cout << c1.average << endl;
}