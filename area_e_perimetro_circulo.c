/*
Desafio: Escreva um algoritmo em C que calcule o retorne o valor da área e do perímetro 
de um círculo. Como entrada, dele deverá receber o valor do raio deste cículo. No campo
de resposta você deverá colar o link do github onde armazenará seu código.

Dados necessários: valor do raio 

Formula área: pi*raio^2

Formula perímetro: 2*pi*r
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Biblioteca que acrescenta funções matemáticas

int main() {

    float raio, area, perimetro;

    printf("Insira o valor do raio do circulo (em cm): ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2); //Calculo da área

    perimetro = 2*M_PI*raio; //Calculo do perímetro

    printf("O valor da area do circulo eh %.2fcm2 \ne o do perimetro eh %.2fcm3", area, perimetro);

    return 0;
}
