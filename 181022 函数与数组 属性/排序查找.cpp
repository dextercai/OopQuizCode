/**
 * ����:2018-10-22
 * ��ĿҪ������һ�����ݣ���������󣬰�˳������
            Ҫ������һ�����󣬰�ԭ���Ĺ��ɽ������������С�
            �ֱ��д�������Ͳ��Һ������������������������롢
            �������á���������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int *sortf(int *, int);
    int *insertf(int *, int, int);
    int n = 0;
    int *p = new int[n];
    cout << "Nums Of Input Numbers.";
    cin >> n;
    cout << "Input:";
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    p = sortf(p, n);
    cout << "Order:";
    for(int i=0;i<n;i++){
        cout << p[i] << " ";
    }
    cout << endl;
    cout << "Insert:";
    int tmp;
    cin >> tmp;
    cout << "Order After Insert:";
    p = insertf(p, tmp, n);
    for(int i=0;i<n+1;i++){
        cout << p[i] << " ";
    }
    cout << endl << endl << endl;


}
int *sortf(int *a, int n){
    for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                int temp = 0;
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

    return a;
}
int *insertf(int *p, int n, int pn){
    int *np = new int[pn+1];
    np = p;
    np[pn] = n;
    np = sortf(np, pn+1);
    return np;
}
