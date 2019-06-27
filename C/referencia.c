#include<stdio.h>

/*-----------------------------------
    PASSANDO VETORES COMO REFERENCIA
------------------------------------*/

// FUNÇÃO DE TESTE 1

void funcao1(char* vetor){
    for(int i = 0 ; i < sizeof(vetor) ; i++){
        printf("Pos[%d] : %c\n",i,*(vetor+i));
    }
}

int main(){
    char* vetor = "Primeira";

    // TAMANHO DO VETOR
    printf("TAMANHO DO VETOR : %zu\n",sizeof(vetor));

    //FUNCAO 1
    funcao1(vetor);
}