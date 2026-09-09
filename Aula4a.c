// Faça a tabuada de multiplicação de 1 a 10 usando o laço for.

#include <stdio.h>
int main(){

    for(int tabuada = 1; tabuada <= 10; tabuada++){
        printf("Tabuada do %d: \n", tabuada);
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
        }
        printf("------");
    }
    return 0;
}