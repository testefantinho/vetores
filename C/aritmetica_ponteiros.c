#include<stdio.h>

/*----------------------------------------------
    TESTE DE ARITMETICA DE PONTEIROS EM VETORES
-----------------------------------------------*/

int main(){
    char c[6] = {'1','2','3','4','5','6'};
    int vet[3] = {1,2,3};
    int* ptr = vet;

    // TESTANDO COM FOR
    printf("TESTANDO COM O FOR \n\n");
    for(int i = 0 ; i < 6 ; i++){
        printf("Pos[%d] : %c\n",i, *(c+i));
    }

    // NORMAL
    printf("TESTANDO NORMALMENTE \n\n");
    printf("Pos[%d] : %c\n",0, *c);
    printf("Pos[%d] : %c\n",1, *(c+1));
    printf("Pos[%d] : %c\n",2, *(c+2));
    printf("Pos[%d] : %c\n",3, *(c+3));
    printf("Pos[%d] : %c\n",4, *(c+4));
    printf("Pos[%d] : %c\n",5, *(c+5));

    //TESTE DE SAIDA 
    printf("Teste de Saida: \n\n");
    printf("%d\n",*ptr++);  
    printf("%d\n",(*ptr)++);

}