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
int main()
{
    Cricketer c1("Sachin", 10000, 50);

    // Cricketer c2("Dravid", 5000, 40);
    Cricketer *c2 = new Cricketer("Dravid", 5000, 40);

    int *ptr = new int(5345);
    cout << *ptr << endl;
    cout << c2->name << " " << c2->runs << " " << c2->average << endl;
}