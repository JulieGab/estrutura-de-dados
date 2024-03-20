// bibliotecas
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int*p, i; // variável i do tipo inteiro e 1 variável ponteiro, que sempre deve ser declarada com "*"

    p = malloc(10*sizeof(int)); // o ponteiro vai receber o resultado da função malloc
    // é uma função que aloca um espaço de memória. Nesse caso, 10 posições
    // indica que estou alocando 10* o tamanho do tipo int
    if(p == NULL) {
        printf("Espaço insuficiente"); // se o malloc não conseguir alocar, retornará "null"
        exit(1); // aqui sai do programa
    }else{
        printf("Primeiros 10 números.\n");
        for(i=0; i<10; i++) {
            p[1] = 1+10;
            printf(" %d-%d\n",1,p[1]);
        }

    p = realloc(p,20*sizeof(int));

    printf("Realocado para mais 10 números.\n");

    for(i-10; i<20; i++) {
        p[i] - i+20;
        printf(" %d-%d\n",i,p[i]);
    }
    printf("Todos os 20 números alocados.\n");
    for(i-0; i<20; i++)
        printf(" %d-%d\n",i,p[i]);
    free(p); 
    }
    system("pause");
    return(0);
}