#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <string.h>

using namespace std;

// Struct to represent an ATM account
struct ATMAccount {
    int accountNumber;
    string accountHolder;
    string birthday;
    string contactNumber;
    double initialDeposit;
    string pinCode;  // You can use encryption for PIN
    double balance;
};

void showMenu();
void welcomeScreen();
void receipt(const ATMAccount &account, string transactionType, double amount);
void showLogo();
void waiting(unsigned int mseconds);

// Function to enroll a new ATM account
void enrollAccount(map<int, ATMAccount> &accounts) {
    ATMAccount newAccount;
    int newAccountNumber;

    cout << "\n\t\t\tPlease enter a new Bank Account Number: ";
    cin >> newAccountNumber;

    // Check if the account number already exists
    if (accounts.find(newAccountNumber) != accounts.end()) {
        cout << "\n\t\t\tAccount number already exists. Please try again." << endl;
        getch();
        return;
    }

    // Gather user information
    cout << "\n\t\t\tPlease enter the account holder's name: ";
    cin >> newAccount.accountHolder;
    cout << "\n\t\t\tPlease enter the account holder's birthday (DD/MM/YYYY): ";
    cin >> newAccount.birthday;
    cout << "\n\t\t\tPlease enter the account holder's contact number: ";
    cin >> newAccount.contactNumber;
    cout << "\n\t\t\tPlease enter the initial deposit (Min. 5000): $";
    cin >> newAccount.initialDeposit;
    if (newAccount.initialDeposit < 5000) {
        cout << "\n\t\t\tInitial deposit must be at least 5000. Please try again." << endl;
        getch();
        return;
    }

    // Set a default PIN code (you can use encryption)
    newAccount.pinCode = "55555";

    // Initialize the balance for the new account
    newAccount.balance = newAccount.initialDeposit;

    // Add the new account to the map
    accounts[newAccountNumber] = newAccount;

    cout << "\n\t\t\tNew account enrolled successfully!" << endl;
    getch();
}

int main() {
    int choice, account;
    string pin = "";
    char ast;

    map<int, ATMAccount> accounts; // Store account numbers and ATMAccount objects

    welcomeScreen();

    system("cls");
    showLogo();
    cout << "\n\n\t\t\t  Please type your Bank Account Number : ";
    cin >> account;
    cout << "\n\t\t\t  Please type Personal Identification Number(PIN) : ";
    ast = _getch();

    while (ast != 13) {
        pin.push_back(ast);
        cout << '*';
        ast = _getch();
    }

    // Check if the provided account number and PIN are valid
    if (accounts.find(account) == accounts.end() || accounts[account].pinCode != pin) {
        cout << "\n\t\t\tInvalid Bank Account and PIN. Please try again!" << endl;
        getch();
    } else {
        do {
            showMenu();
            cin >> choice;
            while (choice < 1 || choice > 6) {
                cout << "\n\t\t\tPlease enter your choice 1, 2, 3, 4, 5, or 6: ";
                cin >> choice;
            }

            ATMAccount &currentAccount = accounts[account];

            if (choice == 1) {
                // Withdrawal code
                double withdrawalAmount;
                cout << "Enter the withdrawal amount: $";
                cin >> withdrawalAmount;

                if (withdrawalAmount <= 0 || withdrawalAmount > currentAccount.balance) {
                    cout << "Invalid withdrawal amount. Please try again." << endl;
                } else {
                    currentAccount.balance -= withdrawalAmount;
                    receipt(currentAccount, "Withdrawal", withdrawalAmount);
                }
            } else if (choice == 2) {
                // Deposit code
                double depositAmount;
                cout << "Enter the deposit amount: $";
                cin >> depositAmount;

                if (depositAmount <= 0) {
                    cout << "Invalid deposit amount. Please try again." << endl;
                } else {
                    currentAccount.balance += depositAmount;
                    receipt(currentAccount, "Deposit", depositAmount);
                }
            } else if (choice == 3) {
                // Check Balance code
                cout << "Balance: $" << currentAccount.balance << endl;
                getch();
            } else if (choice == 4) {
                // Funds Transfer code (for enrolled accounts only)
                int destinationAccount;
                double transferAmount;
                cout << "Enter the destination account number: ";
                cin >> destinationAccount;
                if (accounts.find(destinationAccount) != accounts.end()) {
                    cout << "Enter the amount to transfer: $";
                    cin >> transferAmount;
                    if (transferAmount <= 0 || transferAmount > currentAccount.balance) {
                        cout << "Invalid tra
