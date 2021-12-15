#include <iostream>
#include <string>
#include "StringLine.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Hello World!\n";
    char a[1024];
    char b[1024];
    cin >> a;
    cin >> b;

    StringLine ST(a);
    StringLine ST2(b);
    cout << "Копирование части строки " << ST.Copy(2, 3) << "\n";
    cout << "Удаление части строки " << ST.Delete(2, 3) << "\n";
    cout << "Длина строки " << ST.GetLenght() << "\n";
    cout << "" << ST << "\n";
    ST = ST + ST2;
    cout << "Соединение строк " << ST << "\n";

}


