// Primeiro Programa em "C" classico Média de notas
// Codigo com entrada do usuário "usar scanf"
#include <stdio.h> // incluindo a biblioteca 
int main(){ //I Todo pograma em C só inicia após o main

    int nota1; // é necessario dizer qual é o tipo da variavel a ser usada
    int nota2;
    int media;

    nota1 = 7;
    nota2 = 8;
    media = (nota1 + nota2)/ 2;

    printf("Media = %d", media);
    return 0; 
}
/*Não é necessario usar acentos e caracteres especiais, sempre declarar o 
tipo das variaveis antes de inicializa-las. Sempre finalizar as linhs de codigo
com ; ponto e virgula.
Primeiro comando a ser usado no terminal é gcc nome do arquivo.c -o nome do arquivo
Segundo comando a ser usado no terminal é .\nome do arquivo*/
