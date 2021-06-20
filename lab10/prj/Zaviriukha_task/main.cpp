#include <iostream>
#include <cmath>
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
#include "ModulesZaviriukha.h"

using namespace std;
int x,y,z, num;
double S;

double cscalculation(int x, int y, int z);
int dec2bin(int num);
void Task(){
     cout << "|-------------------------------------------------------------------------------| " << endl;
     cout << "|Даний застосунок виконує операцiї над файлами, використовуючи функцiї:         | " << endl;
     cout << "| * Task10_1 - шукає чи є в вхiдному файлi слова з задачi та вносить до файлу   | " << endl;
     cout << "|   iнформацiю про розробника та кiлькiсть символiв у введеному реченнi.        | " << endl;
     cout << "| * Task10_2 - Рахує кiлькiсть чисел у файлiю,та дозаписує час перезапису.      | " << endl;
     cout << "| * calculation - рахує число S за формулою з лабораторної роботи №8 та пе-     | " << endl;
     cout << "|   реводить число binNum у двiйкову систему числення.                          | " << endl;
     cout << "|-------------------------------------------------------------------------------| " << endl;
}
void Task10_1();

void Task10_2();
void Task10_3();

int main(){
    setlocale(LC_ALL, "ukr");
    Task();
        cout << "\nСтворiть файл input.txt та введiть його назву з розширенням .txt\n(Ви створюєте вхiдний файл Task10_1.txt,Task10_2.txt,Task10_3.txt\n самостiйно через файловий менеджер у тецi з програмою): \n";
        system("pause");
        cout << "\nКлючi для виклику функцiй: " << endl;
        cout << "Task10_1 -- W" << endl;
        cout << "Task10_2 -- S" << endl;
        cout << "Task10_3-- C" << endl;
        cout << "exit - E" << endl;
             char out;
             cout << "\nВведiть ключ для: ";
             cin >> out;
             if(out == 'E'){
             return 0;
             }else if(out == 'W')
             {
             Task10_1();
             cout << "Робота з файлами була виконана успiшно! Файл було записано у Task10_1.txt" << endl;
             }else if(out == 'S')
             {
             Task10_2();
             cout << "Робота з файлами була виконана успiшно! Файл було записано у Task10_2.txt" << endl;
             }else if(out == 'C')
             {
             Task10_3();
             cout << "Робота з файлами була виконана успiшно! Файл було записано у Task10_3.txt" << endl;
             }

    system("pause");
    return 0;
};
