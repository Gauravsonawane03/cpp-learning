#include <iostream>
using namespace std;
class buffer
{
private:
    int *values;
    int size;

public:
    buffer(int n)
    {
        size = n;
        values = new int[n];
    }
    ~buffer()
    {
        delete[] values;
    }
    buffer(const buffer &other)
    {
        size = other.size;
        values = new int[other.size];
        for (int i = 0; i < size; i++)
        {
            values[i] = other.values[i];
        }
    }

    buffer &operator=(const buffer &other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete values;
        size = other.size;
        values = new int[other.size];
        for (int i = 0; i < size; i++)
        {
            values[i] = other.values[i];
        }
        return *this;
    }
    buffer(buffer &&other)
    {
        {
            size = other.size;
            other.size = 0;
            values = other.values;
            other.values = nullptr;
        }
    }
    buffer &operator=(buffer &&other)
    {
        if (this != &other)
        {
            delete[] values;
            size = other.size;
            values = other.values;
            other.size = 0;
            other.values = nullptr;
        }

        return *this;
    }
    void set(int index, int value)
    {
        values[index] = value;
    }
    int get(int index)
    {
        return values[index];
    }
    bool isEmpty() const
    {
        return values == nullptr && size == 0;
    }
};
int main()
{
    // buffer b(5);
    // b.set(0, 10);
    // b.set(1, 20);
    // b.set(2, 30);
    // b.set(3, 40);
    // b.set(4, 50);
    // buffer a = b;
    // a.set(0, 999);
    // cout << b.get(0) << endl;
    // cout << a.get(0) << endl;

    // buffer a(5);
    // buffer b(2);

    // a.set(0, 100);

    // b = a;

    // a.set(0, 999);

    // cout << b.get(0) << endl;
    // cout << a.get(0) << endl;

    // a.set(3, 400);
    // a.set(4, 500);

    // b = a;

    // cout << b.get(3) << endl;
    // cout << b.get(4) << endl;

    // buffer c(3);

    // c.set(0, 10);
    // c.set(1, 20);
    // c.set(2, 30);

    // c = c;

    // cout << c.get(0) << endl;
    // cout << c.get(1) << endl;
    // cout << c.get(2) << endl;

    // buffer a(5);

    // a.set(0, 10);
    // a.set(1, 20);
    // a.set(2, 30);

    // buffer b = std::move(a);

    // cout << b.get(0) << endl;
    // cout << b.get(1) << endl;
    // cout << b.get(2) << endl;

    // buffer a(5);
    // a.set(0, 10);
    // a.set(1, 20);
    // a.set(2, 30);

    // buffer b(2);
    // b.set(0, 100);
    // b.set(1, 200);

    // b = std::move(a);

    // cout << b.get(0) << endl;
    // cout << b.get(1) << endl;
    // cout << b.get(2) << endl;

    buffer c(3);

    c.set(0, 10);
    c.set(1, 20);
    c.set(2, 30);

    c = std::move(c);

    cout << c.get(0) << endl;
    cout << c.get(1) << endl;
    cout << c.get(2) << endl;

    buffer a(3);

    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    buffer b = std::move(a);

    cout << a.isEmpty() << endl;
    return 0;
}