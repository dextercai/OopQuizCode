/**
 * 日期:2018-10-22
 * 题目要求：输入一批数值型数据，
			存入数组后，
			按顺序和逆序分别打印输出。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#define _MAX_ 10
using namespace std;
int main(){
    int arr[_MAX_];
    cout << "输入数组10个数值元素：" << endl;
    int n = 0;
	while(n<10){
        cin >> arr[n];
        n++;
	}
	cout << "顺序：" << endl;
	for(int i = 0; i<= n-1; i++){
        cout << arr[i] << ' ';
	}
	cout << endl << "倒序：" << endl;
	for(int i = n-1; i>= 0; i--){
        cout << arr[i] << ' ';
	}
}
