#include <iostream>
using namespace std;
int main()
{
    double n = 1;
    double sum = 0.0;
    int lmt;
    /**
    ��ʱ����ᱨ��Process returned -1073741676 (0xC0000094)
    ��Win32�ж�Ӧ�� EXCEPTION_INT_DIVIDE_BY_ZERO
    **/

    cout << "����limit��";
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
