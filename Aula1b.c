// Usando char e int na entrada do usuario
#include <stdio.h>
int main(){

    char nome;
    int idade;
    
    printf("Digite a Primeira letra do seu nome: ");
    scanf("%c", &nome); //Guardando o valor digitado pelo usuario na variavel nome

    printf("Digite sua idade: ");
    scanf("%d", &idade); //Guardando o valor digitado pelo usuario na variavel idade

    printf("A pimeira letra do seu nome eh %c e a sua idade eh %d", nome, idade);

    return 0;

}