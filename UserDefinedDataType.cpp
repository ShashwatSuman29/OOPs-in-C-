#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rno;
    float cgpa;

};
int main (){
    Student s1;
    s1.name = "Shashwat";
    s1.rno = 48;
    s1.cgpa = 9.8;

    Student s2;
    s2.name = "ayush";
    s2.rno = 18;
    s2.cgpa = 7.8;

    cout << s1.name <<" "<< s1.rno <<" " << s1.cgpa <<" "<< endl;
    cout << s2.name <<" "<< s2.rno <<" " << s2.cgpa <<" "<< endl;
}