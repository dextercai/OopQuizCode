/**
 * ����:2018-10-02
 * ��ĿҪ�� ����M=11+ 22+ 33+��+ NN��ֱ��N����15Ϊֹ�����N�Ͷ�Ӧ��M����Ҫ����for���������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
    int m;
    for(int n = 1; n <= 15; n++){
        if( n < 10 ){
            m += n * 10 + n;
        }else if( n >= 10 ){
            m += n*100 + n;
        }
    }
    cout << m;
    return 0;
}
