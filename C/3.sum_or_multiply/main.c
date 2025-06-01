#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

/*

Receber 2 números (A e B)
Se os 2 valores forem iguais, somar A com B
Senão multiplicar A por B
Em todas as circunstâncias, armazenar e exibir o valor em uma variável C

*/
bool isEqual(float a, float b);
float calculate_result(bool result, float a, float b);

int main(void) {
    float numberA, numberB, resultFunction;
    bool isEqualResult;
    
    printf("Digite o numero A e B respectivamente separados por espaco: ");
    scanf("%f %f", &numberA, &numberB);

    isEqualResult = isEqual(numberA, numberB);
    calculate_result(isEqualResult, numberA, numberB);

}  

bool isEqual(float a, float b) {
    if (a == b) {
        printf("Numeros iguais\n");
        printf("Somando...\n");
        sleep(2);
        return true;
    } else {
        printf("Numeros diferentes\n");
        printf("Multiplicando...\n");
        sleep(2);
        return false;
    }
}
float calculate_result(bool result, float a, float b) {
    float numberC;
    if (result) {
        numberC = a + b;
        printf("A soma dos números %.2f e %.2f é de %.2f\n", a, b, numberC);
    } else {
        numberC = a * b;
        printf("A multiplicação dos números %.2f e %.2f é de %.2f\n", a, b, numberC);
    }
}