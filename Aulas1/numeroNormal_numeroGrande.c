#include <stdio.h>
int main(){
    int numeroComSinal = 3000000000; // este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroComSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    
    return 0;
}