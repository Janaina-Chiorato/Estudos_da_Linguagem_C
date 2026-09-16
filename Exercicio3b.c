/*3.Estatísticas de uma População
Crie um algoritmo que leia a idade e o salário de 15 pessoas. Usando loops, calcule e exiba:
A média de salário do grupo.
A maior e a menor idade do grupo.
A quantidade de pessoas com salário menor que R$ 2.000,00*/
#include <stdio.h>
int main() {
    int idade, menor_idade, maior_idade;
    int contador_salario_baixo = 0;
    float soma_salario;
    float salario, media;

    printf("==== Coletor de Dados ====\n");

    for(int i = 0; i < 15; i++){
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("\n");

    if(i == 0){
        maior_idade = idade;
        menor_idade = idade;
    }else{
        if(idade > maior_idade){
            maior_idade = idade;
        }
        if(idade < menor_idade){
            menor_idade = idade;
        }
    }
    soma_salario = soma_salario + salario;

    if (salario < 2000){
        contador_salario_baixo++;
    }
    
    }
    media = soma_salario / 15;

    printf("----- Estatísticas de uma Populacao -----\n");
    printf("A maior idade do grupo eh %d\n", maior_idade);
    printf("A menor idade do grupo eh %d\n", menor_idade);
    printf("A media salarial eh R$%.2f\n", media);
    printf("Pessoas com salario menor que R$ 2.000,00 eh %d\n",contador_salario_baixo);

    return 0;
}