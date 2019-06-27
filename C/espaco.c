#include<stdio.h>

/*-----------------------------
    CALCULO TO TAMANHO DO VETOR
-------------------------------*/

int main(){
    int tamanho;
    printf("CALCULO DO TAMANHO DA ÁREA DE MEMÓRIA DO VETOR\n\n");
    printf("Digite o tamanho do vetor que deseja: ");
    scanf("%d",&tamanho);

    int tipo_char = tamanho * sizeof(char);
    int tipo_int = tamanho * sizeof(int);
    int tipo_float = tamanho * sizeof(float);

    printf("\n TAMANHO DO VETOR EM CHAR %d Bytes",tipo_char);
    printf("\n TAMANHO DO VETOR EM INT %d Bytes",tipo_int);
    printf("\n TAMANHO DO VETOR EM FLOAT %d Bytes\n",tipo_float);

}