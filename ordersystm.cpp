#include <iostream>
#include <fstream> // File handling ka header file
using namespace std;

int main()
{
    int pizza, burger, fries, choice, total_price;
    pizza = 1000;
    burger = 500;
    fries = 300;
    total_price = 0;

    ofstream orderFile("order.txt"); // File create ki (write mode)

    while (true)
    {
        cout << "1. pizza🍕\n2. burger🍔\n3. fries🍟\n4. Exit❌\n";
        cout << "enter the item number above to check price and order:";
        cin >> choice;

        if (choice == 1)
        {
            cout << "you choice pizza and its price is:: " << pizza << endl;
            orderFile << "Pizza ordered - Price: " << pizza << endl; // File mein likha
        }
        else if (choice == 2)
        {
            cout << "you choice burger and its price is:: " << burger << endl;
            orderFile << "Burger ordered - Price: " << burger << endl;
        }
        else if (choice == 3)
        {
            cout << "you choice fries and its pries is:: " << fries << endl;
            orderFile << "Fries ordered - Price: " << fries << endl;
        }
        else if (choice == 4)
        {
            break;
        }
    } // loop end

    while (true)
    {
        cout << "press number 4 for Exit❌" << endl;
        cout << "enter  order number for total bill::";
        cin >> choice;

        if (choice == 1)
        {
            total_price = total_price + pizza;
            cout << "total bill is: " << total_price << endl;
        }
        else if (choice == 2)
        {
            total_price = total_price + burger;
            cout << "total bill is: " << total_price << endl;
        }
        else if (choice == 3)
        {
            total_price = total_price + fries;
            cout << "total bill is: " << total_price << endl;
        }
        else if (choice == 4)
        {
            cout << "total bill is: " << total_price << endl;
            orderFile << "Total Bill: " << total_price << endl; // File mein likha
            break;
        }
    }

    cout << "your order is complete Thank You! 🙏😄❤️";

    orderFile.close(); // File close ki
}
