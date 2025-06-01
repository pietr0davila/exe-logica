#include <stdio.h>

/*
    Recebe um número
    Imprime seu sucessor
    Imprime seu antecessor
*/
void get_predecessor(int number);
void get_successor(int number);

int main(void) {
    int input_number;
    printf("Digite um numero: ");
    scanf("%i", &input_number);
    
    get_predecessor(input_number);
    get_successor(input_number);
}
void get_predecessor(int number) {
    printf("O antecessor de %i é %i\n", number, number - 1);
}
void get_successor(int number) {
    printf("O sucessor de %i é %i\n", number, number + 1);
}