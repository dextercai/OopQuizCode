#include <iostream>
using namespace std;
int main()
{
    double n = 1;
    double sum = 0.0;
    int lmt;
    /**
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
    cout << "n = " << n << endl << "sum = " << sum << endl;
    return 0;
}
