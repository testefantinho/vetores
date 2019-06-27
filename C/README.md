# VETORES(ARRAYS) EM C

* Um Vetor em C é armazenado como um **Ponteiro** para o primeiro Elemento
* Os demais elementos são adicionados continuamente após adicionado o primeiro

## INICIALIZANDO UM VETOR

* A inicialização do vetor é como abaixo:

```c
tipo_dado vetor[tamanho];
```
* Exemplo:

```c
int vetor[10]; // VETOR DE 10 POSIÇÕES
```

* o Vetor _vetor_ é um ponteiro para uma área de memória
* neste vetor podemos armazenar 10 inteiros
* O tamanho da área de memória é calculado como abaixo

```c
posicoes * sizeof(tipo_dado)
```

* No nosso Exemplo:

```c
10 * sizeof(int); // tamanho total: 
```

## I/O DO TAMANHO DO VETOR

* Se deseja saber o tamanho do Vetor, deve usar o Modificador `%zu` no printf

```c
int vetor[] = {1,2,3,4,5,6,7,8,9,10};
printf("Tamanho : %zu",vetor); // Tamanho : 40
```


## Vetores e Referencias

* Os vetores sempre são passados por **Referência** 
* Podemos chamar o Vetor em uma Função externa como abaixo:

```c
void funcao(char* vetor){
    ...
}

int main(){
    char* vetor = "teste";
    funcao(vetor);
}
```
