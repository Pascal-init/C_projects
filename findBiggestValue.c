#include <stdio.h>

int* findBiggestValue(int* arr, int size){ // rückgabewert ist ein Pointer
    int* temp = arr; // temp zeigt auf das erste element von arr
    for(int i = 0; i<size; i++) {
        if (arr[i] > *temp) { // array element grösser als aktuell grösste Zahl?
            *temp = arr[i];
        }
    }
    return temp; // adresse wird zurückgegeben!
}

int main(void) {
    int values[10] = {1,2,3,4,5,3,8,6,0,4};

    printf("biggest Value: %d\n", *findBiggestValue(values, (sizeof(values)/sizeof(values[0])))); //sizeof array -> nicht 10*4 =40
    // wichtig: dereferenzierzierungsoperator verwenden da sonst nur die Adresse von "temp" zurückgegeben wird!
    // Funktion ist nun wie ein Pointer der dereferenziert wird nach dem Aufruf oder nicht
    return 0;
}