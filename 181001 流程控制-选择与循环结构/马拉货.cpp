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
	for (double hs = 0; hs <= 200; hs++)
	{
		for (double hm = 0; hm <= (100-hs/2.0)/2; hm++)
		{
			for (double hl = 0; hl <= (100 - hs / 2.0 - hm * 2.0) / 3; hl++)
				if (hs + hm + hl == 100.0 && hs / 2.0 + hm * 2.0 + hl * 3.0 == 100.0) ///���ж������� 100ƥ�� 100���������жϡ�
					cout << "����" << hl << "ƥ"
					<< "\t����" << hm << "ƥ"
					<< "\tС��" << hs << "ƥ" << endl;
		}
	}
    return 0;
}
