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
    foo = foo/10;
    switch(foo){
    case 10:
    case 9:
        mark = 'A';
        break;
    case 8:
        mark = 'B';
        break;
    case 7:
        mark = 'C';
        break;
    case 6:
        mark = 'D';
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        mark = 'E';
        break;
    }
    cout << "Your Mark is " << mark;
    return 0;
}
