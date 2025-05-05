#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    int average;
    Cricketer(string name, int runs, int average)
    {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
    // void print(Cricketer c)
    // {
    //     cout << c.name << " " << c.runs << " " << c.average << endl;
    // }
};
int main()
{
    Cricketer c1("Sachin", 10000, 50);
    Cricketer c2("Dravid", 5000, 40);

    cout << c1.name << " " << c1.runs << " " << c1.average << endl;
    cout << c2.name << " " << c2.runs << " " << c2.average << endl;
};