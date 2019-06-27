#include<stdio.h>

/*
    DESCOBRINDO O TAMANHO DE UM VETOR
*/

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    // COMO O TAMANHO DO VETOR É GRANDE,USAMOS O %zu
    printf("TAMANHO DO VETOR: %zu\n", sizeof(vetor));
}