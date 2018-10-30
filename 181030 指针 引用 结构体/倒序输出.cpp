#include <iostream>
using namespace std;
int main(){
    int *list = new int[10];
    for(int i=0;i<10;i++){
        cin >> list[i];
    }
    for(int i = 9; i >=0 ; i--){
        cout << *(list+i) << ' ';
    }
	return 0;
}
