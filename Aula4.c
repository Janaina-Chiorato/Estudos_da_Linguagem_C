// Introdução a While 
//Leitor de notas só para se usuario  digitar um numero negativo.

# include <stdio.h>
int main(){

    float nota = 0;
    float soma = 0;

    while(nota >= 0){
        printf("Digite o valor da nota, ou( um numero negativo para sair): ");
        scanf("%f", &nota);

        soma = soma +nota;
        printf("A soma das notas eh: %.2f\n", soma);
    }
    return 0;

}