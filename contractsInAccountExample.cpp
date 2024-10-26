#include <iostream>
#include <cassert> // Library for assertions

class Account
{
  private:
    double balance; // account balance
  public:
    // Precondition: The amount to be deposited must be non-negative
    // Postcondition: The balance after deposit should equal the old balance plus the deposited amount
    void deposit(double amount)
    {
        // Precondition
        assert(amount >= 0 && "Deposit amount must be non-negative");

        // Main operation
        double oldBalance = balance;
        balance += amount;

        // Postcondition
        assert(balance == oldBalance + amount && "Balance should be updated correctly after deposit");
    }

    // Precondition: The amount to be withdrawn must be non-negative and should not exceed the available balance
    // Postcondition: The balance after withdrawal should equal the old balance minus the withdrawn amount
    void withdraw(double amount)
    {
        // Precondition
        assert(amount >= 0 && "Withdrawal amount must be non-negative");
        assert(amount <= balance && "Insufficient funds");

        // Main operation
        double oldBalance = balance;
        balance -= amount;

        // Postcondition
        assert(balance == oldBalance - amount && "Balance should be updated correctly after withdrawal");
    }

    // Function to set the balance (used only to initialize the account in this example)
    void setBalance(double initialBalance)
    {
        balance = initialBalance;
    }

    // Function to get the current balance
    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    Account myAccount;
    myAccount.setBalance(1000.0); // Set an initial balance

    // Perform a deposit
    myAccount.deposit(500.0);
    std::cout << "Balance after deposit: " << myAccount.getBalance() << std::endl;

    // Perform a withdrawal
    myAccount.withdraw(300.0);
    std::cout << "Balance after withdrawal: " << myAccount.getBalance() << std::endl;

    return 0;
}