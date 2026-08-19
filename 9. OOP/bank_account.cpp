#include <iostream>
using namespace std;
class bank
{
private:
    int balance;

public:
    bank(int initialBalance) : balance(initialBalance)
    {
    }

    int deposit(int amount)
    {
        if (amount >= 0)
        {
            balance = balance + amount;
        }
        else
            cout << "Invalid figure." << endl;
        return balance;
    }
    int withdraw(int amount)
    {
        if (amount >= 0)
        {
            if (amount <= balance)
            {
                balance = balance - amount;
            }
            else
            {
                cout << "Insufficient balance." << endl;
            }
        }
        else
            cout << "invalid figure,Enter the correct amount!" << endl;
        return balance;
    }
    int getBalance()
    {
        return balance;
    }
};
int main()
{
    bank customer1(50);
    cout << "Balance after deposite: $" << customer1.deposit(-40) << endl;
    cout << "Balance after withdrawl: $" << customer1.withdraw(-100) << endl;
    cout << "balance after next withdrawl: $" << customer1.withdraw(1) << endl;
    cout << "Remaining Balance: $" << customer1.getBalance() << endl;
    return 0;
}
