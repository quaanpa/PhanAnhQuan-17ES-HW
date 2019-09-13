#include <iostream>
#include <conio.h>

using namespace std;

class BankAccount
{
    private:    long ID;
                double balance;
    public:
        BankAccount(long id, double bal)
        {
            ID= id;
            balance= bal;
        }
        void deposit(double val)
        {
            if (val> 0)
                balance= balance+ val;
        }
        void withdraw(double val)
        {
            if(val> 0 && balance> val)
                balance= balance- val;
        }
        void ShowDetails()
        {
            cout << "ID= " << ID << endl;
            cout << "Balance= " << balance << endl;
            cout << "\n\n";
        }
};

int main()
{
    BankAccount acc1(123456789, 800);
    BankAccount acc2(123456788,5200);

    acc1.ShowDetails();
    acc1.deposit(10000);
    acc1.ShowDetails();

    acc2.ShowDetails();
    acc2.withdraw(150);
    acc2.ShowDetails();

    return 0;
}
