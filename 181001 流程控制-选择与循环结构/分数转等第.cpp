/**
 * ����:2018-10-02
 * ��ĿҪ�󣺸���һ���ٷ��Ƴɼ���
 *      Ҫ������ɼ��ȼ�A��B��C��D��E��
 *      90������ΪA��
 *      80��89��ΪB��
 *      70��79��ΪC��
 *      60��69��ΪD��
 *      60������ΪE��
 *      Ҫ����������3�������εĳɼ�����ӡ����Ӧ�ĵȼ��Ƴɼ���
 *      ����switch��if���ֱ���ɡ���
 * ��д��dextercai��CWZ��
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    int foo;
    char mark;
    cout << "Enter the score:";
    cin >> foo;
    if(foo>=90){
        mark = 'A';
    }else if(foo >= 80 && foo <= 89){
        mark = 'B';
    }else if(foo >= 70 && foo <= 79){
        mark = 'C';
    }else if(foo >= 60 && foo <= 69){
        mark = 'D';
    }else if(foo < 60){
        mark = 'E';
    }
    cout << "Your Mark is " << mark;
    return 0;
}
