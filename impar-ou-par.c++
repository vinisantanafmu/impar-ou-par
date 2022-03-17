#include <stdio.h>

int numero;

int main() {
    
    printf("Bem vindo ao checador de números\n\n");
    printf("Digite o número que deseja checar:\n");
    scanf("%i", &numero);
    
    numero = numero % 2;
    
    if (numero == 0) {
        printf("\n\nO número é par!");
    }
    else {
        printf("\n\nO número é impar!");
    }
    
    
    return 0;
}
