#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "pilha.h"
#include "cardapio.h"
#include "fila.h"
#include "pedidos.h"
#include "pedidos.c"


int main(){
    setlocale(LC_ALL, "Portuguese");
    tp_hamburger cardapio[10];
    inicializacardapio(cardapio);
    imprimecardapio(cardapio);
    tp_fila fila_pedidos;                
    inicializaFila(&fila_pedidos);
    tp_pedido p = criar_pedido(145, 2);
    insereFila(&fila_pedidos, p);

    return 0;
}
