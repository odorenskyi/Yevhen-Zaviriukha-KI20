#include <iostream>
#include <fstream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <sstream>
#include <codecvt>
#include <ctime>
#include <bitset>
#include <cmath>
#include <locale>
#include <ctime>

double cscalculation(int x, int y, int z){

    double S = sin(x)/sqrt(abs(z * y/y + x)) + 3*pow(y,5);

    return S;
}


int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
void Task10_1(){
    string name ={"Завірюха Євгеній Олександрович,\n"
                  "ЦНТУ, Україна 2021 рік\n"};
    string str (name);
    ofstream fout;
    fout.open("Task10_1.txt");
    fout << name << endl;
    fout << "Кількість символів - " << str.length();
    fout.close();
}

void Task10_2(){
    ifstream in("Task10_1.txt");
    int max = 0, count = 0;
    char c;
    while (!in.eof()) {
        in.get(c);
        if (isdigit(c))
            count++;
        else
            if (max < count) { max = count; count = 0; }
            else count = 0;
    }
    if (max < count) { max = count; }
    std::cout << "Кiлькiсть чисел у файлi " << max << "\n";
    time_t cur_date=time(0);
    cout << "час дозапмсу iнформацiї\n" <<ctime(&cur_date);
    in.close();
    ofstream fot;
    fot.open("Task10_2.txt");
    fot << "Кiлькiсть чисел у файлi " << max << "\n";
    fot << "час дозапмсу iнформацiї\n" <<ctime(&cur_date);
};
void Task10_3()
{
    cout << "Задайте значення х ";
    cin >> x;
    cout << "\nЗадайте значення y ";
    cin >> y;
    cout << "\nЗадайте значення z ";
    cin >> z;
    S = cscalculation(x,y,z);
    cout << "Результат функцiї - " << S << endl;
    int b = S;
    cout << "Значення у двiйковiй системi  b= " << dec2bin(b) << endl;
    cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
    ofstream fd;
    fd.open("Task10_3.txt");
    fd << "Результат функції " << S << endl;
    fd << "Значення у двійковій системі b= " << dec2bin(b) << endl;
    fd << "x = " << x << "; y = " << y << "; z = " << z;
    fd.close();
}
