/**
 * ����:2018-10-02
 * ��ĿҪ�󣺱�дһ���׳�������ͳ���
            �����������������������������������
            ������дһ���������ڼ���׳ˡ�
            ע��ѡȡ���ʵ��������ʹ洢��������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
    int factorial(int n);
    int n;
    cout<<"���룺";
    cin >> n;
    cout<< factorial(n);
    return 0;
}
int factorial(int n)
{
    if (n==1)
        return 1;
    else
        return n * factorial(n-1); ///�ݹ鷨��׳�
}
