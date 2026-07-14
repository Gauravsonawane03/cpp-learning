#include <iostream>
using namespace std;

/*pseudocode:the room service program 
Gaurav CARPET CLEANING SERVICE
1. prompt the user to enter number of rooms to be cleaned
2. display the number of rooms to be cleaned
3.display the price per room and the cost of cleaning per room
4. display the cost of cleaning for the total number of rooms
5. display the tax and total estimate for the cleaning service
6. display the estimate is valid for 30 days
*/
 int main (){
   cout<<"\n HELLO TO THE GAURAV ROOM CLEANING SERVICES"<<endl;
   cout<<"\nHow many room would you liked to be cleaned?"<<endl;

   int room_to_be_cleaned;
  cin>> room_to_be_cleaned;

   const double price_per_room{25.40};
   const double sales_tax{0.06};
   int expiry_days{30};
    cout<<"\nEstimation for the service "<<endl;
    cout<<"number of rooms:"<<room_to_be_cleaned<<endl;
    cout<<"price for each room:$"<<price_per_room<<endl;
    cout<<"cost for rooms:$"<<price_per_room*room_to_be_cleaned<<endl;
    cout<<"tax for the service:$"<<price_per_room*room_to_be_cleaned*sales_tax<<endl;
    cout<<"===================================================="<<endl;
    cout<<"total estimation for the services:$"<<(price_per_room*room_to_be_cleaned)+(price_per_room*room_to_be_cleaned*sales_tax)<<endl;
    cout<<"the service is valid only for "<< expiry_days <<" days "<<endl;



    cout<<endl;
    return 0;
  }

  /*new task 
  pseudocode for the same cleaning services but modified a bit
  GAURAV CARPET CLEANING SERVICES
  1.prompt the user for to enter how many small rooms?
  2.prompt the user for to enter hwo many big rooms?
  3.display the number of rooms to be cleaned
  4.price per rooms and cost per room
  5.tax rate for the service
  6.total estimation for the services
  7.expiry in 30 days
  */

  int main(){
    cout<<"welcome to Gaurav cleaning services"<<endl;
    cout<<"\nHow many small rooms do you want to be cleaned?"<<endl;
    int small_room_clean;
    cin>>small_room_clean;
    cout<<"how many large rooms do you want to be cleaned?"<<endl;
    int large_room_clean;
    cin>>large_room_clean;

  const double price_small_room{25};
  const double price_large_room{35};
  const double sales_tax{0.06};
  int expiry_day{30};

  cout<<"\nESTIMATION FOR THE CLEANING SERVICE"<<endl;
  cout<<"total number of small rooms:"<<small_room_clean<<endl;
  cout<<"price of small room to be cleaned:$"<<(price_small_room*small_room_clean)<<endl;
  cout<<"total number of large rooms:"<<large_room_clean<<endl;
  cout<<"price of large rooms to be cleaned:$"<<(price_large_room*large_room_clean)<<endl;
  cout<<"cost of all rooms to be cleaned:$"<<(price_small_room*small_room_clean)+(price_large_room*large_room_clean)<<endl;
  cout<<"tax to be applied on services:$"<<(price_small_room*small_room_clean*sales_tax)+(price_large_room*large_room_clean*sales_tax)<<endl;
  cout<<"===================================================================="<<endl;
  cout<<"total estimation for the services:$"<<(price_small_room*small_room_clean)+(price_large_room*large_room_clean)+(price_small_room*small_room_clean*sales_tax)+(price_large_room*large_room_clean*sales_tax)<<endl;
  cout<<" this service is valid for "<< expiry_day << "days" <<endl;
  return 0;

  }