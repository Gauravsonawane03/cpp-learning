#include <iostream>
using namespace std;
class Employee
{
public:
    string name;

protected:
    int employeeID;

public:
    void setEmployeeID(int id)
    {
        employeeID = id;
    }
    virtual void display()=0;
    virtual double calculatePay() = 0;
    virtual ~Employee() = default;
};
class fulltimeEmployee : public Employee
{
private:
    double calculatePay() override
    {
        cout << "salary of fulltime Employee: ₹" << 300000 << endl;
        return 300000;
    }

public:
    void display() override
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Type: Full-time Employee" << endl;
    }
};
class ContractEmployee : public Employee
{
private:
    double hoursworked(int a)
    {
        return a;
    }
    double hourlyRate(int b)
    {
        return b;
    }
    double calculatePay() override
    {
        double amount = hourlyRate(300);
        double hours = hoursworked(12);
        cout << "Salary of Contract employee: ₹" << amount * hours * 30 << endl;
        return amount * hours * 30;
    }

public:
    void display() override
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Type: Contract Employee" << endl;
    }
};

int main()
{
    Employee *employee = new ContractEmployee;
    employee->name = "Anish";
    employee->setEmployeeID(101);
    employee->display();
    employee->calculatePay();
    delete employee;

    Employee *permanent = new fulltimeEmployee;
    permanent->name = "Gaurav";
    permanent->setEmployeeID(007);
    permanent->display();
    permanent->calculatePay();
    delete permanent;
    return 0;
}
