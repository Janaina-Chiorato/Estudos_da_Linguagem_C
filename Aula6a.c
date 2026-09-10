// Escreva um programa que:
// Leia 10 notas (0 a 10).
// Calcule e imprima a média, a maior e a menor nota. 
#include <stdio.h>
int main(){
    int quantidade = 0;
    float nota;
    float soma = 0;
    float media;
    float maior = 0;
    float menor = 10;
    
    printf("Digite as notas de (0 a 10).\n ");

    while (quantidade < 10){ // iniciando o loop
        printf("Digite a nota %d: ", quantidade + 1); //recebendo todas as demais notas
        scanf("%f", &nota);

        //verificando se a nota é valida
        if (nota >= 0 && nota <= 10){
        soma = soma + nota;

        if(nota > maior){
            maior = nota;
        }

        if(nota < menor){
            menor = nota;
        }
        quantidade++;
    }else{
        printf("Nota invalida! Digite um valor entre 0 e 10.\n");
    }

    } 
    if(quantidade > 0) {
        media = soma / quantidade;
        
        printf("\n=== Resultados ===\n");
        printf("Media: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
    }
  
    return 0;
}