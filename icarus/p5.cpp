#include <iostream>
using namespace std;
int main()
{
    int pin, e_pin, attempts, balance, withdraw1, withdraw, remaning_balance;
    e_pin = 1234;
    attempts = 0;
    balance = 100000;
    cout << "PLEAS ENTEAR YOUR CARD IN ATM 💳 " << endl;
    while (attempts < 3)
    {
        cout << "pleas enter your pin:";
        cin >> pin;
        if (pin == e_pin)
        {
            cout << "your pin is correct : permition granted:" << endl;
            break;
            // attempts++;
        }
        else
        {
            attempts++;
            cout << "incorrect pin try again 🚀:" << endl;
        }
        cout << "after three attampts your card is blocked: ok...........you can try agan " << (3 - attempts) << "time" << endl;
    }
    if (pin == e_pin)
    {
        cout << "enter amount you want to withdraw:";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            cout << "your withdraw amount is : " << withdraw << " " << endl;
            remaning_balance = balance - withdraw;
            cout << "your remaning balance is : " << remaning_balance << endl;
            cout << "Thank you for using ATM 🏧";
        }
        else if (withdraw > balance)
        {
            cout << ".......SORRY......your balance is less than " << withdraw;
        }
    }
    else
    {
        cout << "your card is blocked:";
    }
}
