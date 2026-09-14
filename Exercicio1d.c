/*Conversor de Tempo Complexo 
Crie um programa que leia um valor inteiro correspondente a uma quantidade total de segundos.
O programa deve realizar as conversões necessárias e exibir essa quantidade exata fragmentada
no padrão: Semanas, Dias, Horas, Minutos e Segundos. 
Exemplo: Se o usuário digitar um valor alto de segundos, o sistema deve dizer exatamente
quantas semanas inteiras cabem ali, quantos dias restaram, quantas horas, minutos e, por fim, os
segundos restantes. */

#include <stdio.h>
int main() {
    int totalSegundos;
    int semanas, dias, horas, minutos, segundos;

    printf("Digite um valor inteiro de segundos: ");
    scanf("%d", &totalSegundos);

    semanas = totalSegundos / 604800;  // 604800 segundos em uma semana
    dias = (totalSegundos % 604800) / 86400;  // 86400 segundos em um dia
    horas = (totalSegundos % 86400) / 3600;  // 3600 segundos em uma hora
    minutos = (totalSegundos % 3600) / 60;  // 60 segundos em um minuto
    segundos = totalSegundos % 60;

    printf("A quantidade de segundos %d equivale a:\n", totalSegundos);
    printf("%d semanas\n", semanas);
    printf("%d dias\n", dias);
    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);
    printf("%d segundos\n", segundos);

    return 0;
}