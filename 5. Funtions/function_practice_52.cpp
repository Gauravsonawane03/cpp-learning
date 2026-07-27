#include<iostream>
using namespace std;// recursive binary search.
int binarySearch(int arr[],int low,int high,int key){
    int mid=(low+high)/2;
    if(low>high){
        return -1;
    }if (arr[mid] == key){
    return mid;
    }if (key < arr[mid]){
    return binarySearch(arr, low, mid - 1, key);
    }
    return binarySearch(arr, mid + 1, high, key);

}
int main(){
    int key;
    cout << "Enter element: ";
    cin >> key;
int arr[]{2, 5, 8, 12, 16, 23, 38, 56};
int result = binarySearch(arr, 0, 7, key);

if(result == -1)
    cout << "Element not found";
else
    cout << "Element found at index: " << result<<endl;
return 0;
}

