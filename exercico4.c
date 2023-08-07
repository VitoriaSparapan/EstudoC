#include <stdio.h>
int main() {

    double numero = 1900;

    printf("Digite um numero:\n");
    scanf("%lf", &numero);

    if(numero >= 0){
        printf("Positivo, \n");
    } else{
        printf("Negativo,\n");
    }
}

