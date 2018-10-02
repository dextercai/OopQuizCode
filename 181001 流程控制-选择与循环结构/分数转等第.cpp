/**
 * 日期:2018-10-02
 * 题目要求：给出一个百分制成绩，
 *      要求输出成绩等级A、B、C、D、E。
 *      90分以上为A，
 *      80－89分为B，
 *      70－79分为C，
 *      60－69分为D，
 *      60分以下为E。
 *      要求：至少输入3个分数段的成绩并打印出对应的等级制成绩，
 *      并用switch与if语句分别完成。。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int foo;
    char mark;
    cout << "Enter the score:";
    cin >> foo;
    if(foo>=90){
        mark = 'A';
    }else if(foo >= 80 && foo <= 89){
        mark = 'B';
    }else if(foo >= 70 && foo <= 79){
        mark = 'C';
    }else if(foo >= 60 && foo <= 69){
        mark = 'D';
    }else if(foo < 60){
        mark = 'E';
    }
    cout << "Your Mark is " << mark;
    return 0;
}
