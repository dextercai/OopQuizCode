/**
 * ����:2018-10-02
 * ��ĿҪ���� sum=1!+2!+3!+��..+10! ������������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
///��������
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
        return n * factorial(n-1); ///�ݹ鷨��׳�
}
