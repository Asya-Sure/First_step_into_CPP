﻿//#include <iostream>
using namespace std;

//int main()
//{
//    std::cout << "one"<<std:: endl;
//}

//int main()
//{
//    cin >> "Your name is :" >> endl;
//    cout << "Hello, " << endl  ;
//}

#include<iostream>



int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, s;
    int dp;

    cout << "Привет! Я калькулятор!Какие действие вы будете выполнять:" << endl;
    cout << "1. Сложение. " << endl;
    cout << "2. Отнимание." << endl;
    cout << "3. Умножение." << endl;
    cout << "4. Деление." << endl;

    cout << "Введите число для выбора действия" << endl;

    cin >> dp;

    switch (dp)
    {
    case 1:
        cout << "Число a = " << endl;
        cin >> a;
        cout << "Число b = " << endl;
        cin >> b;
        s = a + b;
        cout << "\n" << a << " + " << b << " = " << s << endl;
        break;

    case 2:
        cout << "Число a = " << endl;
        cin >> a;
        cout << "Число b = " << endl;
        cin >> b;
        s = a - b;
        cout << "\n" << a << " - " << b << " = " << s << endl;
        break;


    case 3:
        cout << "Число a = " << endl;
        cin >> a;
        cout << "Число b = " << endl;
        cin >> b;
        s = a * b;
        cout << "\n" << a << " * " << b << " = " << s << endl;
        break;

    case 4:
        cout << "Число a =  " << endl;
        cin >> a;
        cout << "Число b =  " << endl;
        cin >> b;
        s = a / b;
        cout << "\n" << a << " / " << b << " = " << s << endl;
        break;
    }


    return 0;
}