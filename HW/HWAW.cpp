#include <iostream>
#include <Windows.h>
#include <string>
#include <math.h>
#include <cmath>
#include "Sidorov.h"
#define _USE_MATH_DEFINES
using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char f;


    cout << " акое действие будет совершатьс€?" << endl;
    cout << "+  - сложение\n"
        "-  - вычитание\n"
        "*  - умножение\n"
        "/  - деление\n"
        "% - остаток от делени€\n"
        "s - среднее арифметическое\n"
        ">    - максимальное из двух чисел\n"
        "<    - минимальное их двух чисел\n"
        "n    - какие числа отрицательные\n";
    cin >> f;

    switch (f)
    {
    case '+':
        int a, b;
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Sum(a, b) << endl;
        break;

    case '-':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Minus(a, b) << endl;
        break;

    case '/':
        float c, d;
        cout << "¬ведите первое число:";
        cin >> c;
        cout << "¬ведите второе число:";
        cin >> d;

        if (d < 0 or d > 0)
        {
            cout << Del(c, d) << endl;
        }
        else
        {
            cout << "Error" << endl;
        }
        
        break;
    case '%':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        if (b != 0)
        {
            cout << Div(a, b) << endl;
        }
        else
        {
            cout << "Error" << endl;
        }
        break;
    case 's':
        cout << "¬ведите первое число:";
        cin >> c;
        cout << "¬ведите второе число:";
        cin >> d;

        cout << Mid(c,d) << endl;
        break;
    case '>':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Max(a, b) << endl;
        break;
    case '<':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Min(a, b) << endl;
        break;
    case 'n':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Neg(a, b) << endl;
        break;
    case '*':
        cout << "¬ведите первое число:";
        cin >> a;
        cout << "¬ведите второе число:";
        cin >> b;

        cout << Mult(a, b) << endl;
        break;
    }

}