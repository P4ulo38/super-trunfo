#include <stdio.h>

int main() {
    /*
    Atribuição Simples (=)
    Atribuição Soma (+=)
    Atribuição Subtração (-=)
    Atribuição Multiplicação (*=)
    Atribuição Divisão (/=)
     */
   int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // resultado = resultado + 20;
    resultado += 20; // Atribuição Soma
    printf("Resultado: %d\n", resultado);

    // resultado = resultado - numero1;
    resultado -= numero1; // Atribuição Subtração
    printf("Resultado: %d\n", resultado);

    // resultado = resultado * 5;
    resultado *= 5; // Atribuição Multiplicação
    printf("Resultado: %d\n", resultado);

    // resultado = resultado / 2;
    resultado /= 2; // Atribuição Divisão
    printf("Resultado: %d\n", resultado);
}