// Faça a tabuada de multiplicação de 1 a 5 usando o laço while.

#include <stdio.h>
int main(){

    int tabuada = 1;

    while(tabuada <= 5){
        printf("Tabuada do %d: \n", tabuada);
        int i = 1;

        while(i <= 10){
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
            i++;
        }
        printf("------\n");
        tabuada++;
    }
    return 0;
}