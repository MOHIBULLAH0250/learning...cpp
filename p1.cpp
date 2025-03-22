#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    float A, C, R,choice;
    cout << "enter any radius for calculate aria and cercumfarenc:";
    cin >> R;
    while (true)
    {
        cout << "1. Aria\n2. Aercumfarenc\n3. Exit"<<endl;
        cin >> choice;
        if (choice == 1)
        {
            A = PI * R * R;
            cout << "Aria = " << A<<endl;
        }
        else if (choice == 2)
        {
            C = 2 * PI * R;
            cout << "Cercumfaren = " << C<<endl;
        }
        if (choice == 3)
        {
            break;
        } 
    }
    cout << "end programe.............";
}