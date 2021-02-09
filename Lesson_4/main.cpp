/*1.Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно),
*   если да – вывести true, в противном случае – false;
  2.Написать программу, проверяющую, является ли некоторое число - натуральным простым.
    Простое число - это число, которое делится без остатка только на единицу и себя само.
  3.Написать программу, выводящую на экран “истину”, если две целочисленные константы,
    объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.
* 4.Написать программу, которая определяет является ли год високосным.
*   Каждый 4-й год является високосным, кроме каждого 100-го,
*   при этом каждый 400-й – високосный.
*   Для проверки работы вывести результаты работы программы в консоль
*/

#include <iostream>

using namespace std;
const int CONST1 = 3;
const int CONST2 = 7;

void Constants(const int &CONST1,const int &CONST2){
    if(CONST1 == CONST2 && CONST1 == 10){
        cout << "The constants are equal to each other(Each is equal to 10)\n";
    };
    if (CONST1 + CONST2 == 10){
        cout << "The sum of the constants is 10\n";
    }
}

void Number(double& c,double& g)
{
    if((c + g) >= 10 && (c + g) <=20) cout << "true\n\n" << endl;
    else cout << "false\n\n";
}
int main()
{
   //1. Входит ли сумма в диапазон
    cout << "Enter 2 numbers(Let's check if their sum is included in the range) : ";
    double c;
    double g;
    cin >> c >> g;
    Number(c,g);

    //2 Простое число
    int f;
    cout << "let's check if the number is prime: ";
    cin >> f;
    for(int i = 2; i < f ; i++)
    {
        if(f % i == 0)
        {
         cout << "false\n" << endl;
         break;
        }
        else
        {
        cout << "true\n";
        break;
        }
     }
    if(f < 1)
    {
        cout << "false\n";

    }

    //3 Константы
    Constants(CONST1,CONST2);

    // 4 Высокосный год
    /*Написать программу, которая определяет является ли год високосным.
    *   Каждый 4-й год является високосным, кроме каждого 100-го,
    *   при этом каждый 400-й – високосный.
    *   Для проверки работы вывести результаты работы программы в консоль
    *   */
    cout << "Enter the desired year: ";
    int year = 0;
    cin >> year;
    if ((year % 4 != 0 || year % 100 == 0) && year % 400 != 0){
        cout << year <<" is a normal year";
        }
    else cout << year << " is a leap year";

    return 0;
}
