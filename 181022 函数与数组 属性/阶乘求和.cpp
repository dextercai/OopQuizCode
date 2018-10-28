/**
 * 日期:2018-10-02
 * 题目要求：编写一个阶乘数列求和程序，
            其中主函数用于输入项数并输出计算结果，
            单独编写一个函数用于计算阶乘。
            注意选取合适的数据类型存储计算结果。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
    int factorial(int n);
    int n;
    cout<<"输入：";
    cin >> n;
    cout<< factorial(n);
    return 0;
}
int factorial(int n)
{
    if (n==1)
        return 1;
    else
        return n * factorial(n-1); ///递归法求阶乘
}
