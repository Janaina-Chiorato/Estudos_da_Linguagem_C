// Introdução ao laço de repetição for
// Imprima os números de 1 a 10 usando um laço de repetição for
#include <stdio.h>
int main(){

    // Iniciar a variavel dentro do laço de repetição for, definir a condição de parada e o incremento da variavel
    // A variavel i vai ser usada apenas dentro do laço de repetição for, ela não existe fora do laço.
    for(int i = 1; i <= 10; i++){
        printf("O numero eh: %d\n",i);
    }
    return 0;
}