#include <iostream>
#include "Calculator_Header.h"

using namespace std;

void LearningVariables()
{
    float a, b, s;
    int dp;

    cout << "Hello! I am a calculator! What actions will we perform:" << endl;
    cout << "1. Addition. " << endl;
    cout << "2. Subtraction." << endl;
    cout << "3. Multiplication." << endl;
    cout << "4. Division." << endl;

    cout << "Enter a number to select an action" << endl;

    cin >> dp;

    switch (dp)
    {
    case 1:
        cout << "Number a = " << endl;
        cin >> a;
        cout << "Number b = " << endl;
        cin >> b;
        s = a + b;
        cout << "\n" << a << " + " << b << " = " << s << endl;
        break;

    case 2:
        cout << "Number a = " << endl;
        cin >> a;
        cout << "Number b = " << endl;
        cin >> b;
        s = a - b;
        cout << "\n" << a << " - " << b << " = " << s << endl;
        break;


    case 3:
        cout << "Number a = " << endl;
        cin >> a;
        cout << "Number b = " << endl;
        cin >> b;
        s = a * b;
        cout << "\n" << a << " * " << b << " = " << s << endl;
        break;

    case 4:
        cout << "Number a =  " << endl;
        cin >> a;
        cout << "Number b =  " << endl;
        cin >> b;
        s = a / b;
        cout << "\n" << a << " / " << b << " = " << s << endl;
        break;
    }
}