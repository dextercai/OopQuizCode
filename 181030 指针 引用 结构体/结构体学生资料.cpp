#include <iostream>
using namespace std;
int main(){
    struct student{
        char name[5];
        int no,score1,score2,score3;
    };
    student arr[] = {{"Zhou",101,93,89,87},
                    {"Yang",102,85,80,78},
                    {"Chen",103,77,70,83},
                    {"Qian",104,70,67,60},
                    {"Li",105,72,70,69}};
    cout << "No\tname\tscore1\tscore2\tscore3\taverage\r\n";
    for(int i = 0; i <= 4; i++){
        cout << arr[i].no << "\t" << arr[i].name << "\t" << arr[i].score1 << "\t" << arr[i].score2 << "\t" << arr[i].score3 << "\t";
        cout << ((int)((arr[i].score1 + arr[i].score2 + arr[i].score3) / 3.0 * 100)) * 0.01 << endl;
    }
}
