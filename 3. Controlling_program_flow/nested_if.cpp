#include<iostream>
#include<string>
using namespace std;
int main(){
    char letter_grades;
    cout<<"Enter the score of the student: ";
    int student_score;
    cin>>student_score;
    if (student_score>=0 && student_score<=100){
        if (student_score>=90)
        letter_grades='A';
        else if (student_score>=80)
        letter_grades='B';
        else if (student_score>=70)
        letter_grades='C';
        else if (student_score>=60)
        letter_grades='D';
        else 
        letter_grades='F';

        cout<<"Your grade is: "<<letter_grades<<endl;
        if (letter_grades=='F')
        cout<<"Sorry you must repeat the class!"<<endl;
        else 
        cout<<"congrates!"<<endl;

    }else 
    cout<<"Sorry! "<<student_score<<" is not in the range! "<<endl;








}