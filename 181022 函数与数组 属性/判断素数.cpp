/**
 * 日期:2018-10-22
 * 题目要求： 编写一个判断素数的程序，
                其中主函数用于输入一个整数并给出判断结果，
                单独编写一个函数用于判断其参数是否为素数，
                其返回值为1表示为素数，为0表示为非素数。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	bool isprimenum(int);
    int n;
    cout<<"输入数字：";
    cin >> n;
    isprimenum(n)?(cout<<n<<"是素数"):(cout<<n<<"不是素数");
    return 0;
}
bool isprimenum(int foo){
    int k = sqrt(foo);
    for(int i=2;i<=k;i++){
        if(foo%i==0){
            return 0;
            break;
        }
    }
    return 1;

}
