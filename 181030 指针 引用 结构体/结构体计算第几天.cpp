/**
 * 日期:2018-10-30
 * 题目要求：定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天
 * 编写：dextercai（CWZ）
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
    cout << "日";
    cin >> time.day;
    cout << "月";
    cin >> time.month;
    cout << "年";
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
