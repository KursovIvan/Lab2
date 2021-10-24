#include <iostream>
#include <conio.h>

using namespace std;

int enterNumber()
{
    int num = 0;
    while (true)
    {
        cout << "Введите число не превышающее 9999, большее 0: " << endl;
        cin >> num;

        if (cin.fail() || cin.peek() != '\n' || num <= 0 || num > 9999)
        {
            cout << "Некорректный ввод" << endl;
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail());
        }
        else return num;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int num = 0;
    num = enterNumber();

    if (num > 999)
    {
        switch (num / 1000)
        {
        case 1: cout << "Одна тысяча "; break;
        case 2: cout << "Две тысячи "; break;
        case 3: cout << "Три тысячи "; break;
        case 4: cout << "Четыре тысячи "; break;
        case 5: cout << "Пять тысячь "; break;
        case 6: cout << "Шесть тысячь "; break;
        case 7: cout << "Семь тысячь "; break;
        case 8: cout << "Восемь тысячь "; break;
        case 9: cout << "Девять тысячь "; break;
        }
    }

    if (num > 1000)
    {

        switch ((num / 100) % 10)
        {
        case 1: cout << "сто "; break;
        case 2: cout << "двести "; break;
        case 3: cout << "триста "; break;
        case 4: cout << "четыреста "; break;
        case 5: cout << "пятьсот "; break;
        case 6: cout << "шестьсот "; break;
        case 7: cout << "семьсот "; break;
        case 8: cout << "восемьсот "; break;
        case 9: cout << "девятьсот "; break;
        }
    }
    else
    {
        switch (num / 100)
        {
        case 1: cout << "Сто "; break;
        case 2: cout << "Двести "; break;
        case 3: cout << "Триста "; break;
        case 4: cout << "Четыреста "; break;
        case 5: cout << "Пятьсот "; break;
        case 6: cout << "Шестьсот "; break;
        case 7: cout << "Семьсот "; break;
        case 8: cout << "Восемьсот "; break;
        case 9: cout << "Девятьсот "; break;
        }
    }

    if (num < 100)
    {
        if (num % 100 >= 20)
        {

            switch ((num % 100) / 10)
            {
            case 2: cout << "Двадцать "; break;
            case 3: cout << "Тридцать "; break;
            case 4: cout << "Сорок "; break;
            case 5: cout << "Пятьдесят "; break;
            case 6: cout << "Шестьдесят "; break;
            case 7: cout << "Семьдесят "; break;
            case 8: cout << "Восемьдесят "; break;
            case 9: cout << "Девяносто "; break;
            }
        }
        else
        {
            switch (num % 100) {
            case 10: cout << "Десять "; break;
            case 11: cout << "Одинадцать "; break;
            case 12: cout << "Двенадцать "; break;
            case 13: cout << "Тринадцать "; break;
            case 14: cout << "Четырнадцать "; break;
            case 15: cout << "Пятнадцать "; break;
            case 16: cout << "Шестнадцать "; break;
            case 17: cout << "Семнадцать "; break;
            case 18: cout << "Восемнадцать "; break;
            case 19: cout << "Девятнадцать "; break;
            }
        }
    }
    else
    {
        if (num % 100 >= 20)
        {
            switch ((num % 100) / 10)
            {
            case 2: cout << "двадцать "; break;
            case 3: cout << "тридцать "; break;
            case 4: cout << "сорок "; break;
            case 5: cout << "пятьдесят "; break;
            case 6: cout << "шестьдесят "; break;
            case 7: cout << "семьдесят "; break;
            case 8: cout << "восемьдесят "; break;
            case 9: cout << "девяносто "; break;
            }
        }
        else
        {
            switch (num % 100) {
            case 10: cout << "десять "; break;
            case 11: cout << "одинадцать "; break;
            case 12: cout << "двенадцать "; break;
            case 13: cout << "тринадцать "; break;
            case 14: cout << "четырнадцать "; break;
            case 15: cout << "пятнадцать "; break;
            case 16: cout << "шестнадцать "; break;
            case 17: cout << "семнадцать "; break;
            case 18: cout << "восемнадцать "; break;
            case 19: cout << "девятнадцать "; break;
            }
        }
    }

    if (num < 10)
    {
        switch (num % 10)
        {
        case 1: cout << "Один "; break;
        case 2: cout << "Два "; break;
        case 3: cout << "Три "; break;
        case 4: cout << "Четыре "; break;
        case 5: cout << "Пять "; break;
        case 6: cout << "Шесть "; break;
        case 7: cout << "Семь "; break;
        case 8: cout << "Восемь "; break;
        case 9: cout << "Девять "; break;
        }
    }
    else if (num / 10 % 10 != 1)
    {
        switch (num % 10)
        {
        case 1: cout << "один "; break;
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        }
    }

    if ((num % 10 == 0) || (num % 10 > 3) || ((9 < num % 100) && (num % 100 < 20)))
    {
        cout << "рублей";
    }
    else if (num % 10 == 1)
    {
        cout << "рубль";
    }
    else
    {
        cout << "рубля";
    }

    _getch();
    return 0;
}