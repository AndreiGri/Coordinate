﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int x = 0;
    int y = 0;

    cout << endl;
    cout << " Введите координату X: ";
    cin >> x;
    cout << " Введите координату Y: ";
    cin >> y;

    if (x > 0) {
        if (y > 0) {
            cout << " Точка с координатами X:" << x << " и Y:" << y << " лежит в первом квандранте." << endl;
        }
        else {
            if (y < 0) {
                cout << " Точка с координатами X:" << x << " и Y:" << y << " лежит в четвёртом квандранте." << endl;
            }
        }
    }
    else {
        if (x < 0) {
            if (y > 0) {
                cout << " Точка с координатами X:" << x << " и Y:" << y << " лежит во втором квандранте." << endl;
            }
            else {
                if (y < 0) {
                    cout << " Точка с координатами X:" << x << " и Y:" << y << " лежит в третьем квандранте." << endl;
                }
            }
        }
    }
    
    if (x == 0 || y == 0)cout << " Точка с координатами X:" << x << " и Y:" << y << " лежит на границе квандрантов." << endl;

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}