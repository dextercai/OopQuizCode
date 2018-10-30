/**
 * 日期:2018-10-30
 * 题目要求：编写函数getlen计算字符串长度，
			形参使用指针或引用，函数返回值是字符串的长度
			（不包含字符串的结束标志），在主函数中调用并测试结果。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int getlen(char *);
    char *str = new char[255];
    cin >> str;
    cout << getlen(str);
    return 0;
}
int getlen(char * str){
    int len = 0;
    for(int i=0;;i++){
        if((*(str+i))=='\0')
            break;
        len++;
    }
    return len;
}
