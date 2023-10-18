#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor
    BankAccount(std::string accountNumber, std::string accountHolderName, double initialBalance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount should be greater than zero." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else if (amount <= 0) {
            std::cout << "Invalid withdrawal amount. Amount should be greater than zero." << std::endl;
        } else {
            std::cout << "Insufficient balance for withdrawal." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("1234567890", "John Doe", 1000.0);

    // Display initial account balance
    myAccount.displayBalance();

    // Deposit money into the account
    myAccount.deposit(500.0);

    // Display updated balance after deposit
    myAccount.displayBalance();

    // Withdraw money from the account
    myAccount.withdraw(200.0);

    // Display updated balance after withdrawal
    myAccount.displayBalance();

    return 0;
}
