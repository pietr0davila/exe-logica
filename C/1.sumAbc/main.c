#include <stdio.h> 

/*
    Receber números A, B e C (num_1, num_2, num_3)
    Somar Número A com número B
    Verificar se sum (Soma de A e B) é maior que C
*/
void get_numbers(float *a, float *b, float *c);
float verify_numbers(float a, float b, float c);

int main(void) {
    float numberA, numberB, numberC, sumAB;
    
    get_numbers(&numberA, &numberB, &numberC);
    
    sumAB = verify_numbers(numberA, numberB, numberC);
   
    return 0;
}
float verify_numbers(float a, float b, float c) {
    float sum = a + b;
    if (sum > c) {
        printf("A soma de A e B eh maior que C\n");
    } else if (sum == c) {
        printf("A soma de A e B eh igual a C\n");
    } else {
        printf("A soma de A e B nao eh maior que C\n");
    }

    return sum;

}
void get_numbers(float *a, float *b, float *c) {
    printf("Digite os numeros A, B e C (Separados por espaco): ");
    scanf("%f %f %f", a, b, c);

}
