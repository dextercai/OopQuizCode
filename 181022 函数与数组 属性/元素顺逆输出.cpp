/**
 * ����:2018-10-22
 * ��ĿҪ������һ����ֵ�����ݣ�
			���������
			��˳�������ֱ��ӡ�����
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#define _MAX_ 10
using namespace std;
int main(){
    int arr[_MAX_];
    cout << "��������10����ֵԪ�أ�" << endl;
    int n = 0;
	while(n<10){
        cin >> arr[n];
        n++;
	}
	cout << "˳��" << endl;
	for(int i = 0; i<= n-1; i++){
        cout << arr[i] << ' ';
	}
	cout << endl << "����" << endl;
	for(int i = n-1; i>= 0; i--){
        cout << arr[i] << ' ';
	}
}
