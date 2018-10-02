/**
 * 日期:2018-10-02
 * 题目要求： 计算M=11+ 22+ 33+…+ NN，直到N等于15为止，输出N和对应的M。（要求用for语句做）。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
    int m;
    for(int n = 1; n <= 15; n++){
        if( n < 10 ){
            m += n * 10 + n;
        }else if( n >= 10 ){
            m += n*100 + n;
        }
    }
    cout << m;
    return 0;
}
