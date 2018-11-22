/**
 * 日期:2018-11-22
 * 题目要求：复数类
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
public:
    double R,I;
    Complex();
    ~Complex();
    Complex(const Complex &c);
    Complex(float,float);
    void printout();
    double mod();
    Complex &operator+(Complex &c);
    Complex &operator+(float c);
};
Complex::Complex()
{
    R=I=0.0;
}
Complex::Complex(float r,float i)
{
    R = r;
    I = i;
}
Complex::~Complex()
{

}
Complex::Complex(const Complex &c){
    this->R = c.R;
    this->I = c.I;
}
void Complex::printout(){
    cout << R << "+" << I << "i";
}
double Complex::mod(){
    return sqrt(R*R+I*I);
}
Complex &Complex::operator+(Complex &c){
    R += c.R;
    I += c.I;
    return * this;
}
Complex &Complex::operator+(float c){
    R += c;
    return * this;
}
int main(){
    Complex C1 = Complex(1,1);
    Complex C2 = Complex(4,2);
    C1 = C1 + C2;
    C1.printout();
    cout << endl;
    C2 = C2 + 5;
    C2.printout();
    cout << endl;
	cout << C2.mod();
}
