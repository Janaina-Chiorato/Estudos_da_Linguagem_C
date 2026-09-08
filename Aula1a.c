// Codigo com entrada do usuário
#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); //Guardando o valor digitado pelo usuario na variavel nota1

    printf("Digite a Segunda nota: ");
    scanf("%f", &nota2); //Guardando o valor digitado pelo usuario na variavel nota2

    media = (nota1 + nota2) / 2; //Calculando a media das duas notas

    printf("Media = %.2f", media);
    return 0;
}