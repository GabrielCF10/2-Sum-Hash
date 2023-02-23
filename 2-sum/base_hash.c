/*Gabriel Vasconcelos de Arruda. nUSP 12676192
Gabriel Carvalho Fernandes nUSP 13696662
Beatriz Vieira da Silva Andrade nUSP 13692362
Gabriel de Sousa Dalcin. nUSP 13750784
*/
#include "base_hash.h"



int buscar_elemento(hash **tabela, int* vetor, int somatorio, int n){
    int retorno;

    //define os apontadores
    t_apontador mat;
    t_apontador P;

    for(int i = 0; i < n; i++){
        mat = tabela[i];
        while(mat != NULL){
            //modular
            retorno = ((somatorio - mat->elemento) % n);
            if(retorno >= 0){
               P = tabela[retorno];
            while(P != NULL) {
                    if(P->elemento == (somatorio - mat->elemento)){
                        return 1;
                    }
                   P = P->proximo;
                }
            }
            mat = mat->proximo;
        }
    } 
    return 0;
}  

void apagar(hash **tabela,int n) {  //funcao para apagar a tabela
    t_apontador mat,mat2;
    for (int i = 0; i < n; i++){
        mat = tabela[i];
        while (mat && mat->proximo != NULL){
            mat2 = mat->proximo;
            mat->proximo = mat2->proximo;
            free(mat2);
        }
        free(mat);
    }
}

void inserirElemento(t_apontador *table, int n, int el){   
    int indice_hashing;
    t_apontador novo;  
	novo = (t_apontador) malloc(sizeof(hash));
    indice_hashing = el % n;  //calcula o modulo (funcao hash)
    novo->elemento = el;
    novo->proximo = table[indice_hashing];
    table[indice_hashing] = novo;  //a insercao é feita na posicao em que foi calculado o modulo na lista
}

