#include <iostream>
using namespace std;
class shape
{
public:
    virtual double area(double a, double b) = 0;
};
class rectangle : public shape
{
public:
    double area(double a, double b) override
    {
        cout << "Area of rectangle: " << a * b << endl;
        return a * b;
    }
};
class circle : public shape
{
public:
    double area(double a, double b) override
    {
        cout << "Area Of circle: " << a * a * 3.14 << endl;
        return a * a * 3.14;
    }
};
int main()
{
    shape *r = new rectangle();
    r->area(3, 2);
    delete r;
    shape *s = new circle();
    s->area(3, 3);
    delete s;
    return 0;
}