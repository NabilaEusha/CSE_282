/* Write a C++ program to store roll no. (starting from 1), name and age of
5 students and then print the details of the student with roll no. 2. */

#include<iostream>
using namespace std;
struct student
{
    int roll,age;
    char name[20];
};

int main(){
 student stu[2];
 cout << "Enter information of students: " << endl;

   
    for(int i = 0; i < 2; i++)
    {
        stu[i].roll = i+1;
        cout << "For roll number " << stu[i].roll << ":" << endl;

        cout << "Enter name: ";
        cin >> stu[i].name;

        cout << "Enter age: ";
        cin >> stu[i].age;
        
        cout << "Enter roll: ";
        cin >> stu[i].roll;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << stu[i].name << endl;
        cout << "Age: " << stu[i].age << endl;
        cout << "Roll: " << stu[i].roll << endl;
    }

 return 0;
}