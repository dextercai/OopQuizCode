/**
 * ����:2018-10-22
 * ��ĿҪ�� ��дһ���ж������ĳ���
                ������������������һ�������������жϽ����
                ������дһ�����������ж�������Ƿ�Ϊ������
                �䷵��ֵΪ1��ʾΪ������Ϊ0��ʾΪ��������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	bool isprimenum(int);
    int n;
    cout<<"�������֣�";
    cin >> n;
    isprimenum(n)?(cout<<n<<"������"):(cout<<n<<"��������");
    return 0;
}
bool isprimenum(int foo){
    int k = sqrt(foo);
    for(int i=2;i<=k;i++){
        if(foo%i==0){
            return 0;
            break;
        }
    }
    return 1;

}
