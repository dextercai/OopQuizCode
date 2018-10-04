/**
 * 日期:2018-10-02
 * 题目要求：求方程ax2+bx+c=0 的解。要求：分别考虑实根和虚根的情况。
 * 编写：dextercai（CWZ）
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

    cout << "请分别设定参数a b c(空格隔开或一行一个):";
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c; ///计算根的判别式

    switch (delta >= 0) ///判断是否大于零（switch写法）
    {
    case 1: ///大于等于零的情况
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "两个实根为：x1 = " << x1 << ", x2 = " << x2 << endl;
            break;
    case 0: ///小于零的情况
        p = -b / (2 * a);
        q = sqrt(-1 * delta) / (2 * a);
        cout << "两个虚根为：x1 = " << p << " + " << q << "i, x2 = "  << p <<" - " << q << "i" << endl;
        break;
    }

    return 0;
}
