#include<stdio.h>

/*------------------
    CRIANDO VETORES
-------------------*/


//=========== INSERIR NUMEROS NO VETOR ==================
void insereNumeros(int* vetor){
    for(int i = 0 ; i < sizeof(vetor) ; i++){
        *(vetor+i) = i;
    }
}

//============ IMPRIMIR VETORES ====================
void imprimirInt(int* vetor){
    for(int i = 0 ; i < sizeof(vetor) ; i++){
        printf("Pos[%d] : %d\n",i,*(vetor+i));
    }
}

void imprimirChar(char* vetor){
    for(int i = 0 ; i < sizeof(vetor) ; i++){
        printf("Pos[%d] : %c\n",i,*(vetor+i));
    }
}


int main(){
    //TIPOS DE VETORES

    // vetor de inteiros
    int inteiros[] = {1,2,3,4,5,6};
    //vetor de char
    char carac[] = {'a','b','c'};
    //vetor vazio
    char vetor[];

    //Entrando valores para um vetor
    printf("Entre uma palavra para o vetor\n");
    scanf("%c",vetor);

    //adicionando valores por funcao
    insereNumeros(vetorNum);

    //IMPRIMINDO VALORES
    printf("INTEIRO JA CONSTRUIDO: \n\n");
    imprimirInt(inteiros);
    printf("CARACTERES JA CONSTRUIDOS: \n\n");
    imprimirChar(carac);
    printf("CARACTERES DEFINIDOS POR ENTRADA: \n\n");
    imprimirChar(vetor);
    printf("INTEIROS DEFINIDOS POR FUNCAO: \n\n");
    imprimirInt(vetorNum);
}