#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rno;
    float cpga;

    Student(){ // default constructor
        

    }
    Student(string n, int r){
        name = n;
        rno = r;
    }

    Student(string n, int r, float c) { // parameterized constructor
        name = n;
        rno = r;
        cpga = c;    

    }
    
};

int main (){
        Student s1("Amit", 1);
        s1.cpga = 9.0;  


        Student s2("Ravi", 2, 8.5);

        Student s3; 
        s3.name = "Rahul";
        s3.rno = 3;
        s3.cpga = 8.0;

        Student s4 = s1; // deep copy
        s4.name = "Deepak"; 

        Student s5(s1); // copy constructor

        
        cout<< s1.name << " " << s1.rno << " " << s1.cpga << endl;
        
        cout<< s2.name << " " << s2.rno << " " << s2.cpga << endl;

        cout<< s3.name << " " << s3.rno << " " << s3.cpga << endl;

        cout<< s4.name << " " << s4.rno << " " << s4.cpga << endl;

        cout<< s5.name << " " << s5.rno << " " << s5.cpga << endl;   
      
}