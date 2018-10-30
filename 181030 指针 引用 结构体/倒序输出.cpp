/**
 * 日期:2018-10-30
 * 题目要求：输入10个整数存入数组list，然后用指针法从后向前输出该数组中的整数。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int *list = new int[10];
    for(int i=0;i<10;i++){
        cin >> list[i];
    }
    for(int i = 9; i >=0 ; i--){
        cout << *(list+i) << ' ';
    }
	return 0;
}
