#include <iostream>
#include <cstring>
using namespace std;
enum sex{
    Female=0,
    Male=1
};
struct DATA{
    int year,month,day;
};
class School{
    string itemName;
public:
    School(string iN);
    School(const School &c);
    ~School();
    void display();
};
School::School(string iN){
    this->itemName = iN;
}
School::School(const School &c){
    this->itemName = c.itemName;
}
School::~School(){;}
void School::display(){
    cout<< "ItemName:" << this->itemName <<"\t";
}

class Item:public School{
    char zone;
    int barCode;
public:
    Item(string iN,char z,int bC);
    Item(const Item &c);
    ~Item();
    void display();
};
Item::Item(string iN, char z, int bC):School(iN){
    this->zone = z;
    this->barCode = bC;
}
Item::Item(const Item &c):School(c){
    this->zone = c.zone;
    this->barCode = c.barCode;
}
Item::~Item() { ; }
void Item::display() {
	School::display();
	cout << "Zone:" << this->zone << "\tBarCode:" << this->barCode << "\t";
}

class Student:public School{
    sex sexid;
    int stuNum;
    int borrowBookNum;
public:
    Student(string iN,sex si,int sN,int bBN);
    Student(const Student &c);
    ~Student();
    void display();
};
Student::Student(string iN, sex si, int sN, int bBN) :School(iN) {
	sexid = si;
	stuNum = sN;
	if(bBN >5)
        throw -5;
    else
        borrowBookNum = bBN;
}
Student::Student(const Student &c) :School(c) {
	this->sexid = c.sexid;
	this->stuNum = c.stuNum;
	this->borrowBookNum = c.borrowBookNum;
}
Student::~Student() {;}
void Student::display() {
	Library::display();
	cout << "Sexid:" << this->sexid
        << "\tStudentNumber:" << this->stuNum
        << "\tBorrowBookNumber:" << this->borrowBookNum << "\t";
}




class Teacher:public School{
    sex sexid;
    int tchNum;
    int lessonNum;
public:
    Teacher(string iN,sex si,int sN,int lN);
    Teacher(const Teacher &c);
    ~Teacher();
    void display();
};
Teacher::Teacher(string iN, sex si, int tN, int lN) :School(iN) {
	sexid = si;
	tchNum = tN;
    lessonNum = lN;
}
Teacher::Teacher(const Teacher &c) :School(c) {
	this->sexid = c.sexid;
	this->tchNum = c.tchNum;
	this->lessonNum = c.lessonNum;
}
Teacher::~Teacher() {;}
void Teacher::display() {
	Library::display();
	cout << "Sexid:" << this->sexid
        << "\tTeacherNumber:" << this->tchNum
        << "\tlessonNumber:" << this->lessonNum << "\t";
}


int main(){


}
