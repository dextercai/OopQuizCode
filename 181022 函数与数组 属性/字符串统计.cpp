/**
 * ����:2018-10-22
 * ��ĿҪ���ø���ֵ�ķ������ַ���

   C is a general purpose, procedural,
   imperative computer programming language
   developed in 1972 by Dennis Ritchie at the
   Bell Telephone Laboratories for use with
   the Unix operating system.

   ��ŵ��ַ�����s�У����ͳ�����еĴ�д��ĸ��Сд��ĸ�����֡��ո񡢶��ŵĸ�����
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    char s[]="C is a general purpose, procedural, imperative computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the Unix operating system.";
    int length = sizeof(s)/sizeof(char);
    int result[5]={0};
    for(int i=0;i<length-1;i++){
        if(s[i]>=65 && s[i]<=90){ ///��д
            result[0]++;
        }else if(s[i]>=97 && s[i]<=122){ ///Сд
            result[1]++;
        }else if(s[i]>=48 && s[i]<=57){ ///����
            result[2]++;
        }else if(s[i]==32){ ///�ո�
            result[3]++;
        }else if(s[i]==44){ ///����
            result[4]++;
        }
    }
    cout << "��д" << result[0] << endl
         << "Сд" << result[1] << endl
         << "����" << result[2] << endl
         << "�ո�" << result[3] << endl
         << "����" << result[4] << endl;
}
