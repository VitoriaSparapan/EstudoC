#include <stdio.h>

int main() {
    printf("Hello, World 1.\n");
    printf("valor inteiro:%d.\n",10);
    printf("valor real com apenas duas casas: %2.f.\n", 3.000000);
    printf("Dado de texto: %c.\n",  'a');
    printf("Dado de texto: %s.\n", "testando");



    int idade = 0;
    int ano = 1950;

    printf("digite uma idade e o ano:\n");
    scanf("%d %d", &idade, &ano);

    printf("idade informada: %d.\n", idade);
    printf("ano informada: %d.\n", ano);

}
