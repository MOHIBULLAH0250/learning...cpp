#include <iostream>
using namespace std;
int main()
{
    int correctPin = 1234; // Initial correct PIN
    int enteredPin;
    int attempts = 0;
    bool isBlocked = false;
    int balance = 100000; // Initial balance
    // PIN Verification
    while (attempts < 3)  
    {
        cout << "Enter PIN: ";
        cin >> enteredPin;
        if (enteredPin == correctPin)
        {
            cout << "PIN correct. Access granted.\n";
            break;
        }
        else
        {
            attempts++;
            cout << "Incorrect PIN. Attempts left: " << (3 - attempts) << endl;
        }
        if (attempts == 3)
        {
            cout << "Card blocked due to 3 incorrect attempts.\n";
            isBlocked = true;
        }
    }

    if (isBlocked)
    {
        return 0; // Exit the program if card is blocked
    }
    while(true)
    {
        int choice;
        cout << "\n1. Check Balance\n2. Withdraw Money\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Your balance: " << balance << endl;
            if (balance < 500)
            {
                cout << "Less than balance\n";
            }
        }
        else if (choice == 2)
        {
            int amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Error: Insufficient balance.\n";
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;

                if (balance < 500)
                {
                    cout << "Less than balance\n";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting. Thank you for using the ATM.\n";
            break;
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
