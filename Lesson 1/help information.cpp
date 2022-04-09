#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0; // Ввод переменных и присвоение им какого-либо числа
    cout << "enter something in a: "; // Вывести на экран надпись в ""
    cin >> a; // Задать переменной (а) введённое значение
    cout << "enter something in b: "; // Вывести на экран надпись в ""
    cin >> b; // Задать переменной (b) введённое значение
    cout << "a*b="; cout << a*b << endl; // Вывести текст в "" и значение переменной, перенести на строку

    int x = 0; // Ввести переменную х
    x = a+b+c; // Присвоить переменной х значение суммы a+b+c
    cout << "Summa chisel "; // Вывести текст "Summa chisel "
    if (x < 0)
    {
        cout << "menshe nulia";
    }
    if (x > 0)
    {
        cout << "bolshe nulia";
    }
    if (x = 0)
    {
        cout << "ravno nuliu";
    }

}
