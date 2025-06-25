#include <stdio.h>

int main() {
    /*
    Incremento (++)
    pre-incremento (++a)
    pos-incremento (a++)
    Decremento (--)
    pre-decremento (--a)
    pos-decremento (a--)
    */

    int numero1 = 1;

    printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 +1
    // numero1 += 1; // Incremento
    //resultado = numero1++; // Incremento pos-fixado
    //printf("Depois do incremento: %d\n", numero1);
    
    printf("Apos Pós-incremento - numero 1: %d\n", numero1);
    numero1--; // Decremento

    //printf("Depois do decremento: %d\n", numero1);
    
    

}