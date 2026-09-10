// Calculadora de IMC com Operadores condicionais
#include <stdio.h>
int main() {
    float peso, altura;
    float imc;
    int opcao;

    printf("---- Calcule seu IMC ----\n");
    printf("Qual o seu peso: ");
    scanf("%f", &peso);

    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf(" O seu IMC calculado eh: %1.f\n");

    if(imc < 18.5){
        printf("Abaixo do peso %1.f", imc);
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso Adequado %1.f", imc);
    }
    else if(imc >= 25.0 && imc <= 29.9){
        printf("Sobre peso %1.f", imc);
    }else{
        printf("Obesidade %1.f", imc);
    }
    return 0;
}