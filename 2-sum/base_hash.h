#ifndef BASE_HASH_H
#define BASE_HASH_H

#include <stdio.h>
#include <stdlib.h>

typedef struct hash *t_apontador;

typedef struct hash
{ 
  int elemento;
  t_apontador proximo;
} hash;

int buscar_elemento(hash **tabela, int* vetor, int somatorio, int n);
void apagar(hash **tabela, int n);
void inserirElemento(t_apontador *table, int n, int el);

#endif