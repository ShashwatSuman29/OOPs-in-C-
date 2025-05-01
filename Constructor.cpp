#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rno;
    float cpga;

    // Student(){ // default constructor
        

    // }

    Student(string n, int r, float c) { // parameterized constructor
        name = n;
        rno = r;
        cpga = c;    

    }
    
};

int main (){
        Student s1("Amit", 1, 9.0); 
        Student s2("Ravi", 2, 8.5);
        
        
        cout<< s1.name << " " << s1.rno << " " << s1.cpga << endl;
        
        cout<< s2.name << " " << s2.rno << " " << s2.cpga << endl;
}