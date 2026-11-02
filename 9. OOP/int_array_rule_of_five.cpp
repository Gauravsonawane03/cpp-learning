#include <iostream>
using namespace std;
class intArray
{
private:
    int *data;
    int size;

public:
    intArray(int n)
    {
        size = n;
        data = new int[n]{};
    }
    ~intArray()
    {
        delete[] data;
    }
    intArray(const intArray &other)
    {
        size = other.size;
        data = new int[other.size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }
    intArray &operator=(const intArray &other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete data;
        size = other.size;
        data = new int[other.size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
        return *this;
    }
    intArray(intArray &&other)
    {

        size = other.size;
        other.size = 0;
        data = other.data;
        other.data = nullptr;
    }
       intArray &operator=(intArray &&other)
    {
        if (this != &other)
        {
            delete[] data;
            size = other.size;
            data = other.data;
            other.size = 0;
            other.data = nullptr;
        }
        return *this;
    }
    void set(int index, int value)
    {
        data[index] = value;
    }
    int get(int index)
    {
        return data[index];
    }
     bool isEmpty() const
    {
        return data == nullptr && size == 0;
    }
};
int main()
{
    // intArray a(3);
    // a.set(0, 10);
    // a.set(1, 20);
    // a.set(2, 30);

    // intArray b = a;

    // b.set(0, 999);

    // cout << a.get(0) << endl;
    // cout << b.get(0) << endl;

    // intArray a(3);//copy assignemnet
    // a.set(0, 10);
    // a.set(1, 20);
    // a.set(2, 30);

    // intArray b(5);
    // b.set(0, 100);

    // b = a;

    // b.set(0, 999);

    // cout << a.get(0) << endl;
    // cout << b.get(0) << endl;

    // a = a;
    // cout << a.get(0) << endl;

//     intArray a(3);
//     a.set(0, 10);
//     a.set(1, 20);
//     a.set(2, 30);

//     intArray b = std::move(a);

//     cout << b.get(0) << endl;
//     cout << b.get(1) << endl;
//     cout << b.get(2) << endl;

//     cout << a.isEmpty() << endl;

    intArray a(3);
    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    intArray b(5);
    b.set(0, 100);

    // b = std::move(a);
    b = std::move(b);

    cout << b.get(0) << endl;
    cout << b.get(1) << endl;
    cout << b.get(2) << endl;

    cout << a.isEmpty() << endl;
}