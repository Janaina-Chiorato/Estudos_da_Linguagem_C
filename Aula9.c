// Faça um programa que peça ao usuário um número de 1 a 7 e utilize switch 
// case para mostrar:
// 1 - Domingo
// 2 - Segunda-feira
// 3 - Terça-feira
// 4 - Quarta-feira
// 5 - Quinta-feira
// 6 - Sexta-feira
// 7 - Sábado
# include <stdio.h>
int main(){

    int dia;

    printf("------ DIA DA SEMANA ------\n\n");
    printf("1 - Domingo\n 2 - Segunda\n 3 - Terca\n 4 - Quarta\n 5 - Quinta\n 6 - Sexta\n 7 - Sabado\n ");
    printf("Que dia eh hoje escolha uma das opcoes: ");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Hoje eh Domingo!");
        break;
    case 2:
        printf("Hoje eh Segunda!");
        break;
    case 3:
        printf("Hoje eh Terca!");
        break;
    case 4:
        printf("Hoje eh Quarta!");
        break;
    case 5:
        printf("Hoje eh Quinta!");
        break;
    case 6:
        printf("Hoje eh Sexta!");
        break;
    case 7:
        printf("Hoje eh Sabado!");
        break;

    default:
        printf("Dia invalido!");
        break;
    }

    return 0;
}