#include <iostream>
using namespace std;

class Customer
{
    int accountNumber;
    string name;
    int balance;
    int age;

public:
    Customer(int accountNumber, string name, int balance, int age)
    {
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    void updateAge(int age)
    {
        if (age > 0 && age < 100)
        {
            this->age = age;
        }
    }

    void display()
    {
        cout << accountNumber << " " << name << " " << balance << " " << age << endl;
    }
};
int main()
{
    Customer c1(101, "shashwat", 5000, 30);
    Customer c2(102, "amit", 7000, 25);
    Customer c3(103, "saurav", 3000, 28);

    c1.deposit(-200);
    c1.display();
    c1.updateAge(20);
    c1.display();
}