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
        cout << this->name << " " << this->runs << " " << this->average << endl;
    }
    
   int matches(){
    return runs/average;
    
   } 
};

int main()
{
    Cricketer c1("Sachin", 10000, 50);
    Cricketer c2("Dravid", 5000, 40);

    c1.print();
    c2.print();
    cout << c1.matches() << endl;
    cout << c2.matches() << endl;
}