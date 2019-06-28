#include<stdio.h>

/*-------------------------
    CRIANDO VETORES COMUNS
--------------------------*/


//=========== INSERIR NUMEROS NO VETOR ==================
void insereNumeros(int* vetor,int tamanho){
    for(int i = 0 ; i < tamanho ; i++){
        *(vetor+i) = i;
    }
}

//============ IMPRIMIR VETORES ====================
void imprimirInt(int* vetor){
    for(int i = 0 ; i < 6 ; i++){
        printf("Pos[%d] : %d\n\n",i,*(vetor+i));
    }
}

void imprimirChar(char* vetor){
    for(int i = 0 ; i < 3 ; i++){
        printf("Pos[%d] : %c\n\n",i,*(vetor+i));
    }
}


int main(){
    //TIPOS DE VETORES NORMAIS

    // vetor de inteiros
    int inteiros[] = {1,2,3,4,5,6};
    //vetor de char
    char carac[] = {'a','b','c'};


    //ADICIONANDO VALORES POR FUNÇÃO
    int tamanho;
    printf("QUAL SERA O TAMANHO DO VETOR DE INTEIROS: ");
    scanf("%d",&tamanho);
    
    int vetorNum[tamanho];
    insereNumeros(vetorNum,tamanho);

    //IMPRIMINDO VALORES
    printf("INTEIRO JA CONSTRUIDO: \n\n");
    imprimirInt(inteiros);
    printf("CARACTERES JA CONSTRUIDOS: \n\n");
    imprimirChar(carac);
    printf("INTEIROS DEFINIDOS POR FUNCAO: \n\n");
    imprimirInt(vetorNum);
}