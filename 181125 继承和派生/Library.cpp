#include <iostream>
#include <cstring>
using namespace std;
enum sex{ //枚举 定义男女
    Female=0,
    Male=1
};
struct DATE{ //日期
    int year,month,day;
};
class Library{ //定义图书馆类
    string itemName;
public:
    Library(string iN);
    Library(const Library &c);
    ~Library();
    void display();
};
Library::Library(string iN){
    this->itemName = iN;
}
Library::Library(const Library &c){
    this->itemName = c.itemName;
}
Library::~Library(){
	cout << "destructing Library class." << endl;
}
void Library::display(){
    cout<< "ItemName:" << this->itemName <<"\t";
}

class Book:public Library{ //书本类继承图书馆类
    char zone;
    int barCode;
public:
    Book(string iN,char z,int bC);
    Book(const Book &c);
    ~Book();
    void display();
};
Book::Book(string iN, char z, int bC):Library(iN){  //初始化方法
    this->zone = z;
    this->barCode = bC;
}
Book::Book(const Book &c):Library(c){  //深拷贝方法
    this->zone = c.zone;
    this->barCode = c.barCode;
}
Book::~Book() {  //析构方法
	cout << "destructing Book class." << endl;
}
void Book::display() {  //显示数据方法
    Library::display();
	cout << "Zone:" << this->zone << "\tBarCode:" << this->barCode << "\t";
}

class Student:public Library{ //学生类继承图书馆类
    sex sexid;
    int stuNum;
    int borrowBookNum;
public:
    Student(string iN,sex si,int sN,int bBN);
    Student(const Student &c);
    ~Student();
    void display();
};
Student::Student(string iN, sex si, int sN, int bBN) :Library(iN) { //初始化方法
	sexid = si;
	stuNum = sN;
	if(bBN >5)
        throw -5;
    else
        borrowBookNum = bBN;
}
Student::Student(const Student &c) :Library(c) { //深拷贝方法
	this->sexid = c.sexid;
	this->stuNum = c.stuNum;
	this->borrowBookNum = c.borrowBookNum;
}
Student::~Student() { //析构方法
	cout << "destructing Student class." << endl;
}
void Student::display(){ //显示数据方法
    Library::display();
	cout << "Sexid:" << this->sexid
        << "\tStudentNumber:" << this->stuNum
        << "\tBorrowBookNumber:" << this->borrowBookNum << "\t";
}
class Journal:public Book{ //期刊杂志继承图书类
    DATE publishDate;
public:
    Journal(string iN,char z,int bC,DATE pD);
    Journal(const Journal &c);
	~Journal();
	void display();
};
Journal::Journal(string iN, char z, int bC, DATE pD) :Book(iN, z, bC) {
	this->publishDate = pD;
}
Journal::Journal(const Journal &c) : Book(c) {
	this->publishDate = c.publishDate;
}
Journal::~Journal() {
	cout << "destructing Journal class." << endl;
}
void Journal::display() {
	Book::display();
	cout << endl <<"PublishDATE:" << "Year:" << this->publishDate.year << "\t"
                            << "Month:" << this->publishDate.month << "\t"
                            << "Day:" << this->publishDate.day << "\t";
}


int main(){
	Library L("ItemName Sample");
	L.display();
	cout << endl;
	Book B("Book Name", 'K', 1000104);
	B.display();
	cout << endl;
	DATE D;
	D.year = 2000;
	D.month = 12;
	D.day = 14;
	Journal J("Journal Name", 'C', 4000365, D);
	J.display();
	cout << endl;
	try{
	    Student S("CWZ", Male, 21118233, 30);
        S.display();
	}
	catch(int ex)
	{
	    if(ex == -5)
        cout << "TOO MANY BOOKS" << endl;
	}

}
