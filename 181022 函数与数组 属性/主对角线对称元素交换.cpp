/**
 * ����:2018-10-22
 * ��ĿҪ�󣺽�3x3�׶�ά����Ĺ������Խ��߶ԳƵ�Ԫ�ػ�����
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(i<j){
                int tmp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = tmp;
            }
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
                cout << arr[i][j];
        }
        cout <<endl;
    }
}
