/**
 * 日期:2018-10-30
 * 题目要求：定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    struct timeS{
        int year;
        int month;
        int day;
    };
    timeS time;
    cout << "日";
    cin >> time.day;
    cout << "月";
    cin >> time.month;
    cout << "年";
    cin >> time.year;


}
