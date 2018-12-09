#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class VectorClass
{
public:
    virtual void distance() = 0;
};
class D2Vector:public VectorClass
{
public:
    double x,y;
    D2Vector();
    D2Vector(double,double); ///�вγ�ʼ��
    ~D2Vector();
    void distance(); ///�麯��ŷʽ����
    void display();  ///���ݴ�ӡ
    D2Vector &operator+(const D2Vector &c); ///����������
    D2Vector &operator-(const D2Vector &c); ///����������
    double operator*(const D2Vector &c); ///����������
    D2Vector &operator=(const D2Vector &c); ///����������
};
class D2Vector_A:public D2Vector
{
public:
    void distance(); ///һ�������ӡ
    D2Vector_A();
    D2Vector_A(double,double);
};

D2Vector::D2Vector()
{
    this->x = this->y = 0.0;
}
D2Vector::D2Vector(double nx, double ny)
{
    this->x = nx;
    this->y = ny;
}
D2Vector::~D2Vector()
{
    cout << "destructing D2Vector class." << endl;
}
void D2Vector::distance()
{
    cout << sqrt(x*x + y*y);
    cout << endl;
}
void D2Vector::display()
{
    cout << "X:" << this->x;
    cout << "  Y:" << this->y;
    cout << endl;
}
D2Vector &D2Vector::operator+(const D2Vector &c)
{
    this->x += c.x;
    this->y += c.y;
    return *this;
}

D2Vector &D2Vector::operator-(const D2Vector &c)
{
    this->x -= c.x;
    this->y -= c.y;
    return *this;
}
double D2Vector::operator*(const D2Vector &c)
{
    this->x *= c.x;
    this->y *= c.y;
    return this->x + this->y;
}
D2Vector &D2Vector::operator=(const D2Vector &c)
{
    this->x = c.x;
    this->y = c.y;
    return *this;
}
void D2Vector_A::distance()
{
    (this->x-this->y)?(cout <<this->x-this->y):(cout << this->y - this ->x);
    cout << endl;
}
D2Vector_A::D2Vector_A(double a,double b):D2Vector(a,b)
{

}
int main()
{
    D2Vector d2v1 = D2Vector(0,4);
    D2Vector d2v2 = D2Vector(3,0);
    D2Vector d2v3 = d2v1 + d2v2;
    d2v3.display();
    D2Vector *d2V4 = new D2Vector_A(2,3);
    cout << endl << endl;
    d2V4->display();
    cout << "һ�����룺";
    d2V4->distance();
    d2V4 = &d2v1;
    d2V4->display();
    cout << "ŷʽ���룺" ;
    d2V4->distance();

}

