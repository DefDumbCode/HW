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


    cout << "����� �������� ����� �����������?" << endl;
    cout << "+  - ��������\n"
        "-  - ���������\n"
        "*  - ���������\n"
        "/  - �������\n"
        "% - ������� �� �������\n"
        "s - ������� ��������������\n"
        ">    - ������������ �� ���� �����\n"
        "<    - ����������� �� ���� �����\n"
        "n    - ����� ����� �������������\n";
    cin >> f;

    switch (f)
    {
    case '+':
        int a, b;
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Sum(a, b) << endl;
        break;

    case '-':
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Minus(a, b) << endl;
        break;

    case '/':
        float c, d;
        cout << "������� ������ �����:";
        cin >> c;
        cout << "������� ������ �����:";
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
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
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
        cout << "������� ������ �����:";
        cin >> c;
        cout << "������� ������ �����:";
        cin >> d;

        cout << Mid(c,d) << endl;
        break;
    case '>':
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Max(a, b) << endl;
        break;
    case '<':
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Min(a, b) << endl;
        break;
    case 'n':
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Neg(a, b) << endl;
        break;
    case '*':
        cout << "������� ������ �����:";
        cin >> a;
        cout << "������� ������ �����:";
        cin >> b;

        cout << Mult(a, b) << endl;
        break;
    }

}