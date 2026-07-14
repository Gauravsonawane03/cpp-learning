#include<iostream>
using namespace std;
int main(){
    int first_number,second_number,third_number;
    cout<<"\nEnter three numbers for comparison: ";
    cin>>first_number>>second_number>>third_number;
    if(first_number == second_number && first_number == third_number){
        cout<<" They are equal. "<<endl;
    }
    else if(first_number>=second_number&&first_number>=third_number){
        cout<<first_number<<" is the largest number."<<endl;
    }
    else if(second_number>=first_number&&second_number>=third_number){
        cout<<second_number<<" is the largest number."<<endl;
    }
     else if(third_number>=first_number&&third_number>=second_number){
        cout<<third_number<<" is the largest number."<<endl;
    }
    
    
    return 0;
}
