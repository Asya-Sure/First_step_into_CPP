#include <iostream>
#include "Calculator_Header.h"

using namespace std;

void LearningVariables()
{
    setlocale(LC_ALL, "Russian");
    float a, b, s;
    int dp;

    cout << "������! � �����������!����� �������� �� ������ ���������:" << endl;
    cout << "1. ��������. " << endl;
    cout << "2. ���������." << endl;
    cout << "3. ���������." << endl;
    cout << "4. �������." << endl;

    cout << "������� ����� ��� ������ ��������" << endl;

    cin >> dp;

    switch (dp)
    {
    case 1:
        cout << "����� a = " << endl;
        cin >> a;
        cout << "����� b = " << endl;
        cin >> b;
        s = a + b;
        cout << "\n" << a << " + " << b << " = " << s << endl;
        break;

    case 2:
        cout << "����� a = " << endl;
        cin >> a;
        cout << "����� b = " << endl;
        cin >> b;
        s = a - b;
        cout << "\n" << a << " - " << b << " = " << s << endl;
        break;


    case 3:
        cout << "����� a = " << endl;
        cin >> a;
        cout << "����� b = " << endl;
        cin >> b;
        s = a * b;
        cout << "\n" << a << " * " << b << " = " << s << endl;
        break;

    case 4:
        cout << "����� a =  " << endl;
        cin >> a;
        cout << "����� b =  " << endl;
        cin >> b;
        s = a / b;
        cout << "\n" << a << " / " << b << " = " << s << endl;
        break;
    }
}