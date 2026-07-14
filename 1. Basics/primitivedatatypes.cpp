#include <iostream>
using namespace std;
int main() {
   //(for character data type and integer data type)
   //for the middle name intial//
    char middle_initial{'C'};
    cout<<"my middle initial is: "<<middle_initial<<endl;
    //for the unsigned short exam score//
    unsigned short exam_score {55};
    cout<<"my exam score is "<<exam_score<<endl;
    //for countries representative//
    int countries_representative{193};
    cout<<"the countries representative is: "<<countries_representative<<endl;
    //for the long country population//
    long country_population{2076000000};
    cout<<"the country population is: "<<country_population<<endl;    
    // long people in the world//
    long long people_in_the_world{7'600'000'000};
    cout<<"the people in the world is:"<<people_in_the_world<<endl;
    //for the long long distance//
    long long distance_to_alpha_centauri{9'461'000'000'000};
    cout<<"the distance to alpha centauri is: "<<distance_to_alpha_centauri<<" kilometers"<<endl;

//floating point data type//
float car_payment{401.23};
cout<<"the car payment is:"<<car_payment<<endl;

double pi{3.14159};
cout<<"the value of pi is:"<<pi<<endl;

long double large_amount{2.7e120};
cout<<"the large amount is:"<<large_amount<<endl;

//boolean data type//
bool game_over{false};
cout<<"the value of game over is:"<<game_over<<endl;
/*
//overflow//
short value1{30000};
short value2{1000};
short sum{value1 + value2};
cout<<"the sum  of value1 and value2 is:"<<sum<<endl;
*/
    return 0;
}