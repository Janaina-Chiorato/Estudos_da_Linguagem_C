/*1. Escreva um programa que leia 3 notas de um aluno e a média das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/

#include <stdio.h>// Resolução com função
//Função que calcula a média de aproveitamento e retorna o valor da média
float calcula_media(float n1, float n2, float n3, float me){
    return (n1 + n2*2 + n3*3 + me)/7;

}
// Função que determina o conceito e retorna o caractere correspondente
char determina_conceito(float ma ){
    if(ma >= 9) return 'A';
    if(ma >= 7.5 ) return'B';
    if(ma >= 6.0)return 'C';
    if(ma >= 4.0) return 'D';
    return 'E';
}
int main(){
    float nota1, nota2, nota3;
    float me, ma;
    char conceito;

    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");  
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    me = (nota1 + nota2 + nota3) / 3; // calcula a média das notas dos exercícios
    // chamando as funções 
    ma = calcula_media(nota1, nota2, nota3, me);
    conceito = determina_conceito(ma);

    // saída de dados
    printf("A media de aproveitamento eh: %.2f\n", ma);
    printf("O conceito eh: %c\n", conceito);

    return 0;
}