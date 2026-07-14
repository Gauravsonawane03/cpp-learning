#include <iostream>
#include <string>
using namespace std;
int main(){
/*take input as customer name and shopping amount
then use if condition if the amount is 5000₹ or more 
then print Congratulations <name>!
You received a 10% discount. other nothing
if it qualifies then calculate 
discount = shopping_amount * 10 / 100
then print discount and final amount
*/
cout<<"\nEnter customer name: ";
string customer_name;
cin>>customer_name;
cout<<"Enter shopping amount: ";
int shopping_amount;
cin>>shopping_amount;
double discount=shopping_amount * 10/100;
double final_amount=shopping_amount-discount;
if (shopping_amount>=5000){
    cout<<"Congratulation,"<<customer_name<<"!"<<endl;
    cout<<"You received a 10% discount."<<endl;
    cout<<"Discount:₹"<<discount<<endl;
    cout<<"Final Amount:₹"<<final_amount<<endl;
    cout<<endl;
}
return 0;



}
