/**
 * ����:2018-10-02
 * ��ĿҪ��100ƥ����100����������һƥ��3��������һƥ��2����С��һƥ��0.5 ����������С�С��ƥ���ĸ�����ϲ������
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
	///��������Forѭ�� ���������еĿ�����
    for(int hs=0; hs<=200; hs++)
    {
        for(int hm=0; hm<=50; hm++)
        {
            for(int hl=0; hl<=34; hl++)
                if(hs+hm+hl==100 && hs/2+hm*2+hl*3==100) ///���ж������� 100ƥ�� 100���������жϡ�
                    cout << "����"  << hl <<"ƥ"
                         << "\t����"  << hm <<"ƥ"
                         << "\tС��"  << hs <<"ƥ"<<endl;
                }
    }
    return 0;
}
