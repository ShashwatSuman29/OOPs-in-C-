#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int age;
    string country;
};

class Engineer
{
public:
    string domain;
    int experience;
    string company;
};

class PhoduBanda : public Cricketer, public Engineer
{
public:
    string hobby;


    PhoduBanda(string name , int age, string country, string domain, int experience, string company, string hobby)
{
 this->name = name;
    this->age = age;
    this->country = country;
    this->domain = domain;
    this->experience = experience;
    this->company = company;
    this->hobby = hobby;
}
};



void printdetails(PhoduBanda P)
{

    cout << "Name: " << P.name << endl;
    cout << "Age: " << P.age << endl;
    cout << "Country: " << P.country << endl;
    cout << "Domain: " << P.domain << endl;
    cout << "Experience: " << P.experience << endl;
    cout << "Company: " << P.company << endl;
    cout << "Hobby: " << P.hobby << endl;
};
int main()
{
    PhoduBanda p1("Ravi", 25, "India", "Software", 2, "TCS", "Cricket");
    printdetails(p1);
}