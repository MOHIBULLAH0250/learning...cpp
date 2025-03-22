#include <iostream>
#include <fstream> // File Handling header
using namespace std;

int main()
{
    int pin, e_pin, attempts, balance, withdraw, remaning_balance;
    e_pin = 1234;
    attempts = 0;

    // Step 1: Read balance from file
    ifstream infile("balance.txt");
    if (!infile)
    {
        // Agar file nahi mili, to default balance set karo
        balance = 100000;
    }
    else
    {
        infile >> balance;
        infile.close();
    }

    cout << "PLEASE ENTER YOUR CARD IN ATM 💳 " << endl;

    while (attempts < 3)
    {
        cout << "Please enter your PIN: ";
        cin >> pin;
        if (pin == e_pin)
        {
            cout << "Your PIN is correct: Permission granted:" << endl;
            break;
        }
        else
        {
            attempts++;
            cout << "Incorrect PIN, try again 🚀" << endl;
            cout << "You have " << (3 - attempts) << " attempts left." << endl;
        }
    }

    if (pin == e_pin)
    {
        cout << "Your current balance is: " << balance << endl;
        cout << "Enter amount you want to withdraw: ";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            cout << "Your withdraw amount is: " << withdraw << endl;
            remaning_balance = balance - withdraw;
            cout << "Your remaining balance is: " << remaning_balance << endl;

            // Step 2: Write updated balance to file
            ofstream outfile("balance.txt");
            outfile << remaning_balance;
            outfile.close();

            // Step 3: Save transaction log
            ofstream log("transaction_log.txt", ios::app); // append mode
            log << "Withdrawn: " << withdraw << " | Remaining balance: " << remaning_balance << endl;
            log.close();

            cout << "Thank you for using ATM 🏧" << endl;
        }
        else
        {
            cout << ".......SORRY......your balance is less than " << withdraw << endl;
        }
    }
    else
    {
        cout << "Your card is blocked." << endl;
    }

    return 0;
}
