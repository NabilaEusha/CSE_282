/* Write a C++ program to store and print the roll no., name, age, and marks
of a student using structures. */

#include<iostream>
using namespace std;
 
 struct student
 {
    int roll,age;
    float marks;
    char name[20];
 };
 
int main(){
    student stu1;
    cout<<"Enter your name: ";
    cin>> stu1.name;
    cout<<"Enter your roll number: ";
    cin>> stu1.roll;
    cout<<"Enter your age: ";
    cin>> stu1.age;
    cout<<"Enter marks: ";
    cin>> stu1.marks;

    cout<<"\nDisplaying Information: "<<endl;
    cout<<"Name :"<<stu1.name<<endl;
    cout<<"Roll :"<<stu1.roll<<endl;
    cout<<"Age :"<<stu1.age<<endl;
    cout<<"Marks :"<<stu1.marks<<endl;


return 0;
}
