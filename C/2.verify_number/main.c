#include <stdio.h>
#include <math.h>

/*
    # Receber um número
    # Verificar se ele é Par ou Ímpar
    # Verificar se é positivo ou negativo
*/
void is_odd_or_even(float number);
void is_positive_or_negative(float number);

int main(void) {
    while (1) {
        float input_number;
        printf("Digite um numero: ");
        if (scanf("%f", &input_number) != 1) {
            printf("[ERRO] Entrada invalida!");
            while (getchar() != '\n') {
                continue;
            }
        }
        if (input_number == 0) {
            printf("O numero eh 0 e nao pode ser classificado como Par/Impar\n");
            continue;
        }
        is_odd_or_even(input_number);
        is_positive_or_negative(input_number);
    }
    
}
void is_odd_or_even(float number) {   
    if (floor(number) != number) {
        printf("[ERRO] Nao eh possivel fazer a operacao com números decimais\n");
    } else {
        int newInt = (int) number; 
        if (newInt % 2 == 0) {
            printf("O numero %.0f eh par!\n", number);
        } else {
            printf("O numero %.0f eh Impar!\n", number);
        }
    }
}
void is_positive_or_negative(float number) {
    if (number < 0) {
        printf("O numero %.2f eh negativo!\n", number);
    } else {
        printf("O numero %.2f eh Positivo!\n", number);
    }
}