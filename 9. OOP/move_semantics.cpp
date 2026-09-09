#include <iostream>
using namespace std;

class Number {
private:
    int* value;

public:
    Number(int v) {
        value = new int(v);
    }
    Number(Number&& other) {
    value = other.value;
    other.value = nullptr;
}
Number& operator=(Number&& other) {
    if (this != &other) {
        delete value;
        value = other.value;
        other.value = nullptr;
    }

    return *this;
}

    ~Number() {
        delete value;
    }

    void print() {
        cout << *value << endl;
    }
};

int main() {
    Number a(10);
    Number b(20);

    b = std::move(a);

    b.print();
}