// Conversão de temperatura de Celsius para Fahrenheit
#include <stdio.h>
int main(){
    float celcius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;

    printf("A temperatura em Fahrenheit eh: %.2f", fahrenheit);

    return 0;
}