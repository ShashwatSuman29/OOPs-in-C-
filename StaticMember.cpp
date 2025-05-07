#include <iostream>
using namespace std;

class Customer
{
public:
    int accountNumber;
    string name;
    int balance;
    static int total_customers; // static member variable to count total customers.
    static int total_balance; // static member variable to count total balance.

    Customer(int accountNumber, string name, int balance)
    {
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
        total_customers++; // Increment the static member variable for each new customer.
        total_balance += balance; // Increment the total balance with the new customer's balance.
    };

    static void accessStaticMember() //  static member function to access static member variable. it only accesses static member variable.
    {
        cout << total_customers << endl;
        cout << total_balance << endl;
    }

    void deposit(int amount) // deposit function to add amount to the balance.
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount) // withdraw function to subtract amount from the balance.
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display() // display function to show account details.
    {
        cout << accountNumber << " " << name << " " << balance << " " << total_customers << endl;
    }

    void display_total() // display function to show total customers.
    {
        cout << "Total customers: " << total_customers << endl;
    }
};
int Customer::total_customers = 0; // Initialize static member variable outside the class.
int Customer::total_balance = 0; // Initialize static member variable outside the class.

int main()
{
    Customer c1(101, "Shashwat", 1000);
    Customer c2(102, "Amit", 2000);
    // c1.display();
    // c2.display();
    Customer c3(103, "Ravi", 3000);
    // c3.display();
    // Customer::total_customers = 10;  //we can access static member variable using class name as weel . we dont necesarily need to create an object of the class to access it.

    c1.display_total();
    c1.deposit(500);
    c1.withdraw(200);
    Customer::accessStaticMember(); // accessing static member function
}