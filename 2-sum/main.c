#include "base_hash.h"

int main(){ 
    int M, D, elemento, resp;
    
    
    scanf("%d", &M);   //número de elementos do conjunto 

    //define vetorAuxiliar
    int vetAux[M];

    //define a tabela
    hash *table[M];
   

    for(int i=0;i<M;i++){
        table[i] = NULL; 
    }

    //insercao
    for(int i=0;i<M;i++){
        scanf("%d", &vetAux[i]);
        inserirElemento(table, M, vetAux[i]);
    }
    
    scanf("%d",&D);     //numero de consultas a serem feitas


    for(int i=0; i<D; i++){
        //elemento de soma
        scanf("%d", &elemento);    
        //consulta se existe
        resp = buscar_elemento(table, vetAux, elemento, M);
        if(resp==1){
            printf("S\n");
        }else{
            printf("N\n");
        }
        
        resp = 0;
    }
    
    //apagar
    apagar(table,M);
    return 0;
}