/**
 * ����:2018-10-02
 * ��ĿҪ�� ���㵱nΪ��ֵʱ������ʽsum= 1 + 1/2 + 1/3 + �� + 1/n >limit������
 * ���n��Ӧ��sum��limit�Ӽ������룬Ҫ����while��do... while ��䣬limit=10������
 * ��д��dextercai��CWZ��
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
    ���˴��������ʣ�
    Ϊʲôʹ����������ʼ������ʱ��
    �����޷�����ִ�У�
    long n = 1;
    double sum = 0.0;
    int lmt;
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
    cout << "n = " << n << endl << "sum = " << setprecision(15) << sum << endl;
    return 0;
}
