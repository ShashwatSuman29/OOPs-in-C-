#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    Student()
    {
    }

    Student(string name, int rno, float marks)
    {
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    };

    float getMarks() // getter function to access private member marks
    {
        return marks;
    }

   float setMarks(float m)
    {
        marks = m;
        return marks; // setter function to modify private member marks
    }

private:
    float marks;
};
int main()
{
    Student s1("John", 101, 95.5);
    cout << s1.getMarks() << endl; // Accessing private member using getter function
    s1.setMarks(98.0);
    cout << s1.setMarks(98.0) << endl;
}
