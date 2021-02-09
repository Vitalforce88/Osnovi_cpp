//Урок 3 "Основы С++" Выполнил Егоров А. В.

/* 1.Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с плавающей точкой,
    где a, b, c, d – целочисленные константы;
  2.Дано целое число, выведите на экран разницу между этим числом и числом 21.
    Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21.
    При выполнении задания следует использовать тернарный оператор.
 3.Написать программу, вычисляющую выражение из первого задания,
   а переменные для неё инициализировать в другом файле
 4.Описать трёхмерный целочисленный массив,
   размером 3х3х3, указатель на значения внутри массива
   и при помощи операции разыменования вывести на экран значение
   центральной ячейки получившегося куба [1][1][1]
*/
#include <iostream>

using namespace std;
extern const int Exa;
extern const int Exb;
extern const int Exc;
extern const int Exd;

int main()
{
//1
    const int a = 5;
    const int b = 10;
    const int c = 13;
    const int d = 12;

    double  result = (double)a * ((double)b + ((double)c / (double)d));
        cout <<"\nResult of the expression: " << result << endl;

//2
        cout << "Enter an integer:  ";
        int i = 0;
        cin >> i;
        i <= 21 ? cout << "The difference is equal to: " << 21 - i : cout
                       << "Twice the difference is equal to: " << (i - 21) * 2;

//3
        double  EXresult = (double)Exa * ((double)Exb + ((double)Exc / (double)Exd));
        cout <<"\nResult of the expression: " << EXresult << endl;

//4
        int x;
        int y;
        int z;
        int value = 0;
        int Array[3][3][3];
   for(x = 0, y = 0, z = 0; x < 3 ; x++, y++,z++){
Array[x][y][z] = value;
value ++;
cout << "Index:[" << x << "][" << y << "][" << z << "] = "<< Array[x][y][z] << ' ' << endl;

  }
   int  *ptr;
   ptr = &Array[1][1][1];
   //Не успел прочитать про указатели на массивы...доделаю на следующий урок...


   return 0;

}
