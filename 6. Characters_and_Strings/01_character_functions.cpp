#include<iostream>
#include<cctype>
using namespace std;
// int main(){

//     char ch='A';
//     char st='Z';
//     char cr='7';
//     char pw='@';
//     char sp=' ';

//     cout<<ch<<endl;
//       cout<<st<<endl;
//         cout<<cr<<endl;
//           cout<<pw<<endl;
//             cout<<sp<<endl;
//     return 0;
// }


int main(){
    char ch;

    cout << "Enter one character: ";
    cin >> ch;
    cout<<isalnum(ch)<<endl;
    cout<<isupper(ch)<<endl;
    cout<<islower(ch)<<endl;
    ch=toupper(ch);
    cout<<ch<<endl;
    ch=tolower(ch);
    cout<<ch<<endl;
return 0;
}