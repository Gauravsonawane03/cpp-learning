#include <iostream>
#include <utility>
using namespace std;
class Myarray
{
private:
    int *data;
    int size;

public:
    Myarray(int n)
    {
        size = n;
        data = new int[size];
    }
    Myarray(const Myarray &other)
    {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }
    Myarray &operator=(const Myarray &other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete[] data;
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
        return *this;
    }

    Myarray(Myarray &&other)
    {
        size = other.size;
        data = other.data;
        other.data = nullptr;
    }
    bool isEmpty()
    {
        return data == nullptr;
    }
    Myarray &operator=(Myarray &&other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete[] data;
        size = other.size;
        data = other.data;
        other.data = nullptr;
        return *this;
    }
    int getSize()
    {
        return size;
    }
    void set(int index, int value)
    {
        data[index] = value;
    }
    int get(int index)
    {
        return data[index];
    }
    ~Myarray()
    {
        delete[] data;
    }
};
int main()
{
    // Myarray arr1(5);
    // arr1.set(0,10);
    // arr1.set(1,20);
    // arr1.set(2,30);
    // arr1.set(3,40);
    // arr1.set(4,50);
    // Myarray arr2 = arr1;
    // cout<<arr1.get(0)<<endl;
    // cout<<arr2.get(0)<<endl;
    // arr1.set(0, 99);
    // cout<<arr1.get(0)<<endl;
    // cout<<arr2.get(0)<<endl;---------// copy constructor
    // Myarray arr1(5);
    // Myarray arr2(3);
    // arr1.set(0,10);
    // arr1.set(1,20);
    // arr1.set(2,30);
    // arr1.set(3,40);
    // arr1.set(4,50);
    // arr2 = arr1;---------------- // copy assignment
    // arr1.set(0, 99);
    // cout << arr1.get(0) << endl;
    // cout<<arr2.get(0)<<" ";
    // cout<<arr2.get(1)<<" ";
    // cout<<arr2.get(2)<<" ";
    // cout<<arr2.get(3)<<" ";
    // cout<<arr2.get(4)<<endl;
    // arr1 = arr1;------------------// self assignment
    // cout<<arr1.get(0)<<endl;

    // Myarray arr1(5);
    // arr1.set(0, 99);

    // Myarray arr2 = std::move(arr1);
    // cout << arr2.get(0) << endl;
    // cout << arr1.isEmpty() << endl;-------//move constructor

    // Myarray arr1(5);
    // Myarray arr2(3);

    // arr1.set(0, 99);
    // arr2.set(0, 50);

    // arr2 = std::move(arr1);
    // cout << arr2.get(0) << endl;
    // cout << arr1.isEmpty() << endl;
    // cout << arr2.getSize() << endl;--------// move assignment

    Myarray arr1(5);
    arr1.set(0, 99);

    arr1 = std::move(arr1);

    cout << arr1.get(0) << endl;// self move assignemnt 

    return 0;
}