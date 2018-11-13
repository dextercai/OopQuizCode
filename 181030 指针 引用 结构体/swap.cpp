/**
 * 日期:2018-10-30
 * 题目要求：编写一个函数swap实现两个数据的互换，形参分别指针和引用，在调用并测试结果。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    void swapp(int *,int *);
    void swapa(int,int);
    int *a = new int,*b = new int;
    cin >> *a;
    cin >> *b;
    cout << "Before" << endl;
    cout << "a:" << *a << " b:" << *b << endl;
    swapp(a,b);
    cout << "After" << endl;
    cout << "a:" << *a << " b:" << *b << endl;
    swapa(*a,*b);
}
void swapp(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swapa(int a,int b){
    cout << "After" << endl;
    cout << "a:" << b << " b:" << a << endl;
}
