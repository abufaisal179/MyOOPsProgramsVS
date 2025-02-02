// Hey guys, it's Faisal's Program : TITLE >> Bank Account Management
//Did by my_self
#include <iostream>
using namespace std;

class Customer {
    string name;
    int account_number, balance;

public:
    Customer(string name, int account_number, int balance) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void Deposite(int n) {
        if (n > 0)
            balance += n;
        else
            throw "Invalid Deposit Amount!";  // Throw an exception if deposit is invalid
    }

    void Withdraw(int n) {
        if (n > 0 && n <= balance)
            balance -= n;
        else
            throw "Invalid Withdrawal Amount!";  // Throw an exception if withdrawal is invalid
    }

    void Display() {
        cout << "The balance of " << name << " (A/C " << account_number << ") is: " << balance << endl;
    }
};

int main(void) {
    try {
        Customer A1("Abu Faisal", 1, 5000);
        Customer A2("Peter", 2, 2700);

        A1.Deposite(200);   // Valid deposit
        A1.Withdraw(150);   // Valid withdrawal
        A1.Display();       // Display A1's details

        // Uncomment the lines below to test invalid operations
        // A1.Deposite(-100);  // Invalid deposit, will throw exception
        // A1.Withdraw(6000);  // Invalid withdrawal, will throw exception

    } catch (const char *e) {
        cout << "Exception: " << e << endl;
    }

    return 0;
}
