/**
 * ����:2018-10-02
 * ��ĿҪ�� ����a��b��c���������������������ߣ�����ͬ����Դ����һ�������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
    int x,y,z,t=0;
    cout<<"X:";
    cin>>x;
    cout<<"Y:";
    cin>>y;
    cout<<"Z:";
    cin>>z;
    if(x<y)
    {
        t=x;x=y;y=t;
    }
    if(y<z)
    {
        t=y;y=z;z=t;
    }
    if(x<y)
    {
        t=x;x=y;y=t;
    }
    cout << "�Ӵ�С��˳���ǣ�" << x << '\t' << y << '\t'<< z;
    return 0;
}
