/**
 * ����:2018-10-30
 * ��ĿҪ�󣺶���һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ���
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
    struct timeS{
        int year;
        int month;
        int day;
    };
int main(){

    int days(struct timeS date);
    timeS time;
    cout << "��";
    cin >> time.day;
    cout << "��";
    cin >> time.month;
    cout << "��";
    cin >> time.year;
    cout << days(time);
    return 0;
}
int days(struct timeS date)
{
    int sum = date.day;
    int a[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=1; i<date.month; i++)
    {
        sum+=a[i];
    }
    if(date.month>2&&((date.year%4==0&&date.year%100!=0)||date.year%400==0))
        sum++;
    return sum;
}
