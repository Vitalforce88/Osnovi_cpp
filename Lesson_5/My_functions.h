#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
namespace ArrayFunctions {
#include <iostream>
using namespace std;
//1
void ArraySwap(int *Arr, int size){

    for(int i = 0; i < size; i++){
        if(Arr[i] == 0) Arr[i] = 1;
        else if(Arr[i] == 1) Arr[i] = 0;
        cout << Arr[i] << " ";
    }
    cout << endl;
}
//2
void Arrayfill(int *Arr,int size){
    for(int j = 0, n = 1; j < size; j++,n += 3){
        Arr[j] = n;
        cout << Arr[j] << " ";
    }
    cout << endl;
}
//3
void ArrayBalance(int *Arr,int size){


    int result1 = 0;
    int result2 = 0;

    for(int k = 0, j = (size - 1); k < size; k++, j--){

        result1 += Arr[k];
        if((k-j)!= 0)
        result2 += Arr[j];
        if((k-j) == 0 && result1 == result2){ cout << "true\n";
            break;
        }
        else if((k-j) == 0 && result1 != result2) {
            cout << "false\n";
            break;
        }


    }
    cout << "Result_1 = " << result1 << "\n" << "Result_2 = " << result2 << endl;
}
}
#endif // MY_FUNCTIONS_H
