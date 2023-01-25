#include <stdio.h>
//Criação da estrutura 
struct arvora_binaria_basica{
    int dado;
    struct arvora_binaria_basica *esquerda;
    struct arvora_binaria_basica *direita;

};
//Renomear a estrutura 
typedef struct arvora_binaria_basica no;

/*Para termos o minimo de uma arvore apenas temos
que incluir o no na arvore e depois imprimir 
*/

//Criação da funcao

no* InserirNo (int dado , no*esq , no*dir);


int imprimirPreOrdem(no* n);

int main(int argc, char const *argv[])
{
    no* n = InserirNo(15, InserirNo(10 , NULL , NULL) ,  InserirNo(50 , InserirNo(20 , NULL , NULL) , NULL ));
    printf("Pré-Ordem:");
    imprimirPreOrdem(n);
    
}



no* InserirNo(int dado ,no*esq , no*dir){
    no* n = (no*) malloc(sizeof(no));
    if( n == NULL){
        exit(1);
    }else{
        n->dado = dado;
        n->esquerda = esq;
        n->direita = dir; 
    }

return n;
}


int imprimirPreOrdem(no* n){
    if(n != NULL){
        printf("%i " , n->dado);
        imprimirPreOrdem(n->esquerda);
        imprimirPreOrdem(n->direita);
    }
}

