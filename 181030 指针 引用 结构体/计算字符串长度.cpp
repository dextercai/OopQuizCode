#include <iostream>
using namespace std;
int main(){
    int getlen(char *);
    char *str = new char[255];
    cin >> str;
    cout << getlen(str);
    return 0;
}
int getlen(char * str){
    int len = 0;
    for(int i=0;;i++){
        if((*(str+i))=='\0')
            break;
        len++;
    }
    return len;
}
