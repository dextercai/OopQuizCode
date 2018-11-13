/**
 * 日期:2018-10-30
 * 题目要求：按照平均成绩从低到高排序，输出成绩
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    struct student{
        char name[5];
        int no,score1,score2,score3,avg;
    };
    student arr[] = {{"Zhou",101,93,89,87,0},
                    {"Yang",102,85,80,78,0},
                    {"Chen",103,77,70,83,0},
                    {"Qian",104,70,67,60,0},
                    {"Li",105,72,70,69,0}};
    for(int i = 0; i <= 4; i++){
        arr[i].avg = (int)((arr[i].score1 + arr[i].score2 + arr[i].score3) / 3.0 * 100) * 0.01;
    }
    for(int i = 4; i >=0 ; i--){
        for(int j = 0; j <= i; j++){
            if(arr[i].avg > arr[j].avg){
                student stu = arr[i];
                arr[i] = arr[j];
                arr[j] = stu;
            }
        }
    }
    cout << "No\tname\tscore1\tscore2\tscore3\taverage\r\n";
    for(int i = 0; i <= 4; i++){
        cout << arr[i].no << "\t" << arr[i].name << "\t" << arr[i].score1 << "\t" << arr[i].score2 << "\t" << arr[i].score3 << "\t";
        cout << arr[i].avg << endl;
    }

}
