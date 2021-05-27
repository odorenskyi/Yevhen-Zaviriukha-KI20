#include <iostream>
#include <windows.h>
#include <clocale>
#include <wchar.h>
#include <fcntl.h>
#include <iomanip>
#include <io.h>
#include <cmath>
#include "ModulesZaviriukha.h"


using namespace std;
char a, b;
float x, y, z, S;


   void SoftwareDeveloper(){

    setlocale(LC_ALL, "");


    cout <<"(c) "<<("Розробник - Завiрюха Євгенiй Олександрович. ЦНТУ. 2021 рiк. ©\n");

}

    void funcia(int x, int y, int z, float S){
    cout << "Задайте значення x - ";
    cin >> x;
    if(x == 0){
        cout << "Данна змiна не може дорiвнювати 0" << endl;
        cout << "Задайте значення x - ";
        cin >> x;
    }
    cout << "Задайте значення y - " ;
    cin >> y ;
    cout << "Задайте значення z - " ;
    cin >> z;

    cout << "\n x в десятковiй системi = " << dec << x;
    cout << "\n x в шiстнадцятковiй системi = " << hex << x << "\n";

    cout << "\n y в десятковiй системi = " << dec << y;
    cout << "\n y в шiстнадцятковiй системi = " << hex << y << "\n";

    cout << "\n z в десятковiй системi = " << dec << z;
    cout << "\n z в шiстнадцятковiй системi = " << hex << z << "\n";

    S = s_calculation(x,y,z);
    cout << " S = " << S << endl;
    }

 void Logical_expression(char a, char b){

    cout << "\nУведiть a: ";
    cin >> a;
    cout << "\nУведiть b: ";
    cin >> b;

    wcout << "\n a + 1 < b + 3: " << boolalpha << (a + 1 < b + 3) << endl;
 }
int main()
{
    SoftwareDeveloper();

    funcia(x, y, z, S);

    Logical_expression(a, b);

    system("pause");

    return 0;
}

