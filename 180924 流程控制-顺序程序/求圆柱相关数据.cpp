
#include <iostream>
using namespace std;
int main(){
	const double pi = 3.1415926535898;
	float r=1.5,h=3;
	float s,c;
	cout << "圆半径:";
	cin >> r;
	cout << "圆柱高:";
	cin >> h;
	c = 2 * pi * r;
	s = pi * pi * r;
	cout << "圆周长是：" << c << endl
		 << "圆面积是：" << s << endl
		 << "圆柱表面积是：" << (2*s + c*h) << endl
		 << "圆柱体积是：" << (s*h) << endl ;
	return 0;
}
