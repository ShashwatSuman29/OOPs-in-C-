#include <iostream>
using namespace std;

class loading
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    };

    void sum (int a , int b , int c){
        cout << a+b+c <<endl;
    };

    void sum (float a , float b){
        cout << a+b <<endl;
    };

    void sum (int a , float b){
        cout << a+b <<endl;
    };

    void sum (string a , string b){
        cout << a+b <<endl;
    };
};
int main()
{
    loading a;
    a.sum(2, 3); 
    a.sum(2, 3, 4);
    a.sum(2.5f, 2.5f);
    a.sum(2 ,2.5f);
    a.sum("Hello ", "World");
}
