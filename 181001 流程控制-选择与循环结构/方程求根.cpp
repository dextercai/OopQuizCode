/**
 * ����:2018-10-02
 * ��ĿҪ���󷽳�ax2+bx+c=0 �Ľ⡣Ҫ�󣺷ֱ���ʵ��������������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a = 0, b = 0, c = 0;
    float delta = 0, x1 = 0, x2 = 0;
    float p = 0, q = 0;

    cout << "��ֱ��趨����a b c(�ո������һ��һ��):";
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c; ///��������б�ʽ

    switch (delta >= 0) ///�ж��Ƿ�����㣨switchд����
    {
    case 1: ///���ڵ���������
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "����ʵ��Ϊ��x1 = " << x1 << ", x2 = " << x2 << endl;
            break;
    case 0: ///С��������
        p = -b / (2 * a);
        q = sqrt(-1 * delta) / (2 * a);
        cout << "�������Ϊ��x1 = " << p << " + " << q << "i, x2 = "  << p <<" - " << q << "i" << endl;
        break;
    }

    return 0;
}
