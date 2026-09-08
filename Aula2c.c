// Numero Par ou impar
#include <stdio.h>
int main() {

    int numero;
    int resto;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0){
        printf("Numero %d eh par\n", numero); 
    }else{
        printf("Numero %d eh impar\n", numero);
    }

    return 0;

}