#include<iostream>
using namespace std;
class Fraction {
    public:
        int numerator;
        int denominator;
      
        
     Fraction (int numerator, int denominator) {
            this->numerator = numerator;
            this->denominator = denominator;
        }
       

       void display() {
        cout << numerator << "/" << denominator << endl;
        }

        Fraction operator+(Fraction f) {
            int num = (this->numerator * f.denominator) + (f.numerator * this->denominator);
            int den = this->denominator * f.denominator;
            return Fraction(num, den);
        
        }

        Fraction operator-(Fraction f) {
            int num = (this->numerator * f.denominator) - (f.numerator * this->denominator);
            int den = this->denominator * f.denominator;
            return Fraction(num, den);
        
        }
};
int main (){
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    f1.display();
    f2.display();
    // Fraction f3 = f1.add(f2);
    Fraction f3 = f1 + f2; // operator overloading
    f3.display();
}