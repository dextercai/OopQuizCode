/**
 * 日期:2018-10-22
 * 题目要求：用赋初值的方法把字符串

   C is a general purpose, procedural,
   imperative computer programming language
   developed in 1972 by Dennis Ritchie at the
   Bell Telephone Laboratories for use with
   the Unix operating system.

   存放到字符数组s中，编程统计其中的大写字母、小写字母、数字、空格、逗号的个数。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main(){
    char s[]="C is a general purpose, procedural, imperative computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the Unix operating system.";
    int length = sizeof(s)/sizeof(char);
    int result[5]={0};
    for(int i=0;i<length-1;i++){
        if(s[i]>=65 && s[i]<=90){ ///大写
            result[0]++;
        }else if(s[i]>=97 && s[i]<=122){ ///小写
            result[1]++;
        }else if(s[i]>=48 && s[i]<=57){ ///数字
            result[2]++;
        }else if(s[i]==32){ ///空格
            result[3]++;
        }else if(s[i]==44){ ///逗号
            result[4]++;
        }
    }
    cout << "大写" << result[0] << endl
         << "小写" << result[1] << endl
         << "数字" << result[2] << endl
         << "空格" << result[3] << endl
         << "逗号" << result[4] << endl;
}
