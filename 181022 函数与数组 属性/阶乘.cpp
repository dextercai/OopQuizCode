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
    long factorial(int);
    long long sumfactor(int);
    int n;
    cout<<"���룺";
    cin >> n;
    cout<< sumfactor(n);
    return 0;
}
long factorial(int n)
{
    if (n==1)
        return 1;
    else
        return n * factorial(n-1); ///�ݹ鷨��׳�
}
long long sumfactor(int n){
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += factorial(n);
    }
    return sum;
}
