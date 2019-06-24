/**
 * 日期:2018-11-22
 * 题目要求：学生类
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
#include <cstring>
using namespace std;
class Student{
    public:
        int no,score1,score2,score3,average;
        string name;
        Student(const Student &p);
        Student();
        Student(string, int, int, int, int);
        ~Student();
        void print();
};
Student::Student(const Student &p){ //深拷贝
    name = p.name;
    no = p.no;
    score1 = p.score1;
    score2 = p.score2;
    score3 = p.score3;
    average = (score1 + score2 + score3)/3.0;
}
Student::Student(){ //初始化
        name = {0};
        no = score1 = score2 = score3 = average = 0;
        cout << "Constructor"  << endl;
    }
Student::Student(string namea, int noa, int score1a, int score2a, int score3a){ //有参初始化
        no = noa;
        name = namea;
        score1 = score1a;
        score2 = score2a;
        score3 = score3a;
        average = (score1 + score2 + score3)/3.0;
    }
Student::~Student(){ //析构函数
        cout << "Destructor" << endl;
}
void Student::print(){ //数据打印
        cout << this->no << "\t"
        << this->name.c_str() << "\t" <<
        this->score1 << "\t" <<
        this->score2 << "\t" <<
        this->score3 << "\t";
        cout << this->average << endl;
    }
int main(){
    void sortf(Student *arr);
    void Studentprint(Student *arr);
    Student arr[5]{
                    Student("Yang",102,85,80,78),
                    Student("Chen",103,77,70,83),
                    Student("Qian",104,70,67,60),
                    Student("Li",105,72,70,69),
                    Student("Zhou",101,93,89,87)
                    };
    sortf(arr);
    Studentprint(arr);
}
void sortf(Student *arr){ //冒泡排序
    for(int i = 4; i >=0 ; i--){
        for(int j = 0; j <= i; j++){
            if(arr[i].average > arr[j].average){
                Student stu = arr[i];
                arr[i] = arr[j];
                arr[j] = stu;
            }
        }
    }
}
void Studentprint(Student *arr){ //数据打印
    cout << "No\tname\tscore1\tscore2\tscore3\taverage\r\n";
    for(int i = 0; i <= 4; i++){
       arr[i].print();
    }
}
