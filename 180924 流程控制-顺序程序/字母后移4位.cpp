
#include <iostream>
using namespace std;
int main(){
	l1:
	char foo;
	cin >> foo;
	if((foo > 64 && foo <= 86) || (foo > 96 && foo <= 118)){
		foo += 4;
	}else if((foo >= 87 && foo <91) || (foo >=119 && foo < 123)){
		foo -= 23;
	}
	cout << foo;
	goto l1;
	return 0;
	//使用ASCII码的规律。
}