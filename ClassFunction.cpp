#include <iostream>
using namespace std;

class Cricketer
{ public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
 void print()
    {
        cout << name << " " << runs << " " << average << endl;
    }
    
};

int main()
{
    Cricketer c1("Sachin", 10000, 50);
    Cricketer c2("Dravid", 5000, 40);

    c1.print();
    c2.print();
}