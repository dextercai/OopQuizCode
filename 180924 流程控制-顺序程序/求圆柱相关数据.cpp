
#include <iostream>
using namespace std;
int main(){
	const double pi = 3.1415926535898;
	float r=1.5,h=3;
	float s,c;
	cout << "Բ�뾶:";
	cin >> r;
	cout << "Բ����:";
	cin >> h;
	c = 2 * pi * r;
	s = pi * pi * r;
	cout << "Բ�ܳ��ǣ�" << c << endl
		 << "Բ����ǣ�" << s << endl
		 << "Բ��������ǣ�" << (2*s + c*h) << endl
		 << "Բ������ǣ�" << (s*h) << endl ;
	return 0;
}
