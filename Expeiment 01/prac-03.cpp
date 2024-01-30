/* Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student. */

#include <iostream>
using namespace std;

struct Marks {
    int roll_no;
    char name[20];
    float chem_marks, math_marks, phy_marks;
};


int main() {
	
    Marks marks[5];
    
    //Getting user input for info of the 5 students
    for(int i=0; i<5; i++){
		
        cout <<"For student no "<<i+1<<":"<<endl;
        cout<<"Enter roll no. : ";
        cin>>marks[i].roll_no;
        cout<<"Enter name :";
        cin>>marks[i].name;
        cout<<"Enter Chemistry marks :";
        cin>>marks[i].chem_marks;
        cout<<"Enter Math marks :";
        cin>>marks[i].math_marks;
        cout<<"Enter Physics marks :";
        cin>>marks[i].phy_marks;
        
        
    }
    // Calculating and printing percentage for each student
	for(int i=0; i<5; i++) {
	    cout<<"Student no "<<i+1<<endl;
	    float percentage = ((marks[i].chem_marks + marks[i].math_marks + marks[i].phy_marks)/300.0)*100;
	    cout<<"Percentage : "<<percentage <<endl;
        }
  return 0;
}