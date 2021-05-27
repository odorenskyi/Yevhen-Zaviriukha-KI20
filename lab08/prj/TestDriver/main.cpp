#include <iostream>
#include <cmath>
#include "ModulesZaviriukha.h"
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float x,z, y, S;
cout << "Задайте значення x - ";
    cin >> x;
    if(x == 0){
        cout << "Данна змiна не може дорiвнювати 0" << endl;
        cout << "Задайте значення x - ";
        cin >> x;
    }
    cout << "Задайте значення y - " ;
    cin >> y ;
    if(y == 0){
        cout << "Данна змiна не може дорiвнювати 0" << endl;
        cout << "Задайте значення y - ";
        cin >> y;
    }
    cout << "Задайте значення z - " ;
    cin >> z;

    cout << "Значення: " << s_calculation(x,y,z) << endl;
    system("pause");
    return 0;
}


