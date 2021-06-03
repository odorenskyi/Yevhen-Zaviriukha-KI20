#include <iostream>
#include <clocale>
#include <cmath>
#include "ModulesZaviriukha.h"

using namespace std;

int N, x, y, z, head, input;
double pover;

void SoftmareDeveloper(){
    setlocale(LC_ALL, "ukr");
    cout << "Розробник - Завiрюха Євгенiй Олександрович. ЦНТУ. 2021 рiк." << endl;
}

void task8_1(){
    cout << "Задайте значення х" << endl;
    cin >> x;
    cout << "Задайте значення у" << endl;
    cin >> y;
    if(y == -x){
        cout << "у не може бути протилежною х" << endl;
        cin >> y;
    }
    if(y == 0){
        cout << " у не може бути 0" << endl;
        cin >> y;
    }
    cout << "Задайте значення z" << endl;
    cin >> z;
    if(z == 0){
        cout << "z не може бути 0" << endl;
        cin >> z;
    }
    cout << "S - " << s_calculation(x,y,z) << endl;
}
    void task9_1(){
     cout << "Задайте заначення змiнiй pover - "<< endl;
    cin >> pover;
    if(pover < 0){
        cout << "Некоректно уведаннi данi! Спробуйте ще раз" << endl;
        cin >> pover;
    }
    cout << "швидкiсть вiтру за шкалою Бофорта " << beaufort_point(pover) << endl;
    int S;
    S = beaufort_point(pover);
    if(S == 0){
        cout << "Вiдсутнiсть вiтру.Дим пiднiмається прямовисно.Листя дерев нерухомi." << endl;
    }else if(S == 1){
        cout << "Дим пливе.Флюгель не обертається. " << endl;
    }else if(S == 2){
        cout << "Рух повiтря вiдчувається обличчам.Шелестить листя. Флюгель обертається" << endl;
    }else if(S == 3){
        cout << "Трiпоче листя, хитаються дрiбнi гiлки. Майорить прапор. " << endl;
    }else if(S == 4){
         cout << "Хитаються тонкi гiлки дерев. Вiтер пiднiмає пил та шматки паперу." << endl;
    }else if(S == 5){
     cout << "Хитаються великi гiлки. На водi з\'явлюються хвилi" << endl;
    }else if(S == 6){
         cout << "Хитаються великi гiлки" << endl;
    }else if(S == 7){
     cout << "Хитаються невеликi стовбури дерев.На морi здiймаються хвилi, пiднiмаються" << endl;
    }else if(S == 8){
         cout << "Ламаються гiлки дерев, i вашко йти проти вiтру" << endl;
    }else if(S == 9){
    cout << "Невеликi руйнування. Зриває покрив та руйнує димохiд" << endl;
    }else if(S == 10){
         cout << "Значнi руйнування. Дерева вириває з корiнням." << endl;
    }else if(S == 11){
    cout << "Великi руйнування" << endl;
    }else if(S == 12){
         cout << "Приводить до спустошення" << endl;
    }
    cout << S << endl;
    }
    void task9_2(){
    cout << "Уведiть розмiр голови - ";
    cin >> head;
    if(head < 48){
        cout << "Некоректно уведені данi! Спробуйте ще раз" << endl;
        cin >> head;
    }
    if(head > 62){
        cout << "Некоректно уведені данi! Спробуйте ще раз" << endl;
        cin >> head;
    }
    cout << "Розмiр шолому який вам потрiбен це -  " << head_size(head) << endl;
    }
    void task9_3(){
    cout << "Уведiть число у дiапазонi вiд 0 до 10008000" << endl;
  cin >> N;
  if(N < 0){
    cout << "Некоректно уведено данi! Спробуйте ще раз" << endl;
    cin >> N;
  }
  if(N > 10008000){
    cout << "Некоректно уведені данi! Спробуйте ще раз" << endl;
    cin >> N;
  }
  cout << zero_one_counter(N) << endl;
    }

int main()
{
    SoftmareDeveloper();
    do{
    cout << "Щоб викликати функцiю s_calculation натиснiть 7" << endl;
    cout << "Щоб викликати функцiю 9_1 натиснiть 5" << endl;
    cout << "Щоб викликати функцiю 9_2 натиснiть 4" << endl;
    cout << "Щоб викликати функцiю 9_3 натиснiть 3" << endl;
    cout << "Натисніть  t, T, C щоб закрити програму"<< endl;
    cin >> input;

    if(input == 7){
        task8_1();
    }else if(input == 5){
        task9_1();
    }else if(input == 4){
        task9_2();
    } else if(input == 3){
        task9_3();
    }}while(input != 't' && input != 'T' && input != 'C');
    system("pause");

    return 0;
}
