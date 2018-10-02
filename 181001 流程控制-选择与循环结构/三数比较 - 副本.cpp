/**
 * 日期:2018-10-02
 * 题目要求： 输入a、b、c三个整数，求出其中最大者，并连同三个源数据一起输出。
 * 编写：dextercai（CWZ）
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
    cout << "从大到小的顺序是：" << x << '\t' << y << '\t'<< z;
    return 0;
}
