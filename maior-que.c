#include <stdio.h>

/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

maiorAB = (A+B+abs(A-B))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

#include <stdio.h>
 
int main() {
    
    int A, B, C, maiorAB;
    scanf("%d %d %d", &A, &B, &C);
    
    maiorAB = (A+B+abs(A-B))/2;
    
    printf("%d eh o maior\n", (C+maiorAB+abs(maiorAB-C))/2);
 
    return 0;
}
