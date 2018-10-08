/**
 * 日期:2018-10-02
 * 题目要求： 计算当n为何值时，不等式sum= 1 + 1/2 + 1/3 + … + 1/n >limit成立，
 * 输出n对应的sum（limit从键盘输入，要求用while或do... while 语句，limit=10）。。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n = 1, sum = 0.0;
    double lmt;
    /**
    但此处留有疑问，
    为什么使用如下语句初始化变量时，
    程序无法正常执行：
    long n = 1;
    double sum = 0.0;
    int lmt;
    此时程序会报错：Process returned -1073741676 (0xC0000094)
    在Win32中对应的 EXCEPTION_INT_DIVIDE_BY_ZERO
    **/
    cout << "输入limit：";
    cin >> lmt;
    while(true){
        sum += 1 / n;
        if(sum > lmt)
            break;
        n++;
    }
    cout << "n = " << n << endl << "sum = " << setprecision(15) << sum << endl;
    return 0;
}
