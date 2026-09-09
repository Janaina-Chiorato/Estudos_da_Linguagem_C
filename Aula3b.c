/*Calcular a somatorio de 1 a n onde n é um valor fornecido pelo usuário*/
#include <stdio.h>
int main(){

    int n;
    int soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i; // soma = soma + i
    }
    printf("A soma dos numeros de 1 a %d eh: %d\n", n, soma);
    return 0;
}