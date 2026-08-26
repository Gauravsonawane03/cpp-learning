#include <iostream>
using namespace std;
class Member
{
public:
    string name;

protected:
    int memberId;

public:
    void setMemberId(int id)
    {
        memberId = id;
    }
    virtual void displayInfo() = 0;
    virtual int getborrowedLimit() = 0;
    virtual ~Member() = default;
};
class Studentmember : public Member
{
public:
    void displayInfo() override
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << memberId << endl;
        cout << "Type: Student Member " << endl;
    }
    int getborrowedLimit() override
    {
        cout << "Borrowing limit:" << 3 << endl;
        return 3;
    }
};
class Facultymember : public Member
{
public:
    void displayInfo() override
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << memberId << endl;
        cout << "Type: Faculty Member " << endl;
    }
    int getborrowedLimit() override
    {
        cout << "Borrowing limit:" << 10 << endl;
        return 10;
    }
};
class book
{
public:
    void title()
    {
        cout << "My Journey" << endl;
    }
    void author()
    {
        cout << "Gaurav" << endl;
    }
    int totalcopies(int totalCopies)
    {
        cout << "Total copies: " << totalCopies << endl;
        return totalCopies;
    }
    int availability(int available)
    {

        cout << "Available Books: " << available << endl;
        return available;
    }
    int totalCopies;
    int available;
    book(int copies)
    {
        totalCopies = copies;
        available = totalCopies;
    }

public:
    bool borrow()
    {
        if (available > 0)
        {
            available--;
            return true;
        }
        return false;
    }

public:
    bool returnBook()
    {
        if (available < totalCopies)
        {
            available++;
            return true;
        }
        return false;
    }
};
int main()
{
    Member *member = new Studentmember;
    member->name = "Anjali";
    member->setMemberId(100);
    member->displayInfo();
    member->getborrowedLimit();
    delete member;
    cout << endl;
    Member *impMember = new Facultymember;
    impMember->name = "Jayshree";
    impMember->setMemberId(101);
    impMember->displayInfo();
    impMember->getborrowedLimit();
    delete impMember;
    cout << endl;
    book mybook(5);
    bool invalidReturn = mybook.returnBook();
    cout << invalidReturn << endl;
    mybook.borrow();
    mybook.borrow();
    mybook.borrow();
    mybook.borrow();
    mybook.borrow();
    bool result = mybook.borrow();
    cout << result << endl;
    bool returned = mybook.returnBook();
    cout << returned << endl;
    bool borrowedAgain = mybook.borrow();
    cout << borrowedAgain << endl;

    return 0;
}