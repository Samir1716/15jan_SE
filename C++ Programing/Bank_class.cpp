#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
    private:
        string depositorName;
        int accountNumber;
        string accountType;
        double balanceAmount;
    
    public:
        void assignValues(string name, int number, string type, double balance) 
        {
            depositorName = name;
            accountNumber = number;
            accountType = type;
            balanceAmount = balance;
        }
        
        void deposit(double amount) 
        {
            balanceAmount += amount;
        }
        
        void withdraw(double amount) 
        {
            if(amount > balanceAmount) 
            {
                cout << "Error: insufficient balance" << endl;
            } 
            else 
            {
                balanceAmount -= amount;
            }
        }
        
        void displayBalance() 
        {
            cout << "Name: " << depositorName << endl;
            cout << "Balance: " << balanceAmount << endl;
        }
};

int main() 
{
    BankAccount myAccount;
    myAccount.assignValues("Samir Vaghela", 7086, "Savings", 5000);
    myAccount.displayBalance();
    myAccount.deposit(500);
    myAccount.displayBalance();
    myAccount.withdraw(200);
    myAccount.displayBalance();
    myAccount.withdraw(1500); // should output error message
    return 0;
}
