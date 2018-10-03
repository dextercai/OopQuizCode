/**
 * 日期:2018-10-02
 * 题目要求：求 sum=1!+2!+3!+…..+10! ，并输出结果。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
///声明函数
int factorial(int n);
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
        sum += factorial(i);
    cout<< sum;
    return 0;
}
int factorial(int n)
{
    if (n==1)
        return 1;
    else
        return n * factorial(n-1); ///递归法求阶乘
}
