//
//  main.c
//  StructuresHeap
//
//  Created by Helder Da Rocha on 2/16/14.
//  Copyright (c) 2014 Helder Da Rocha. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ITEM_COUNT 2

typedef struct {
    int id;
    float preco;
    char* nome;
} Produto;

typedef struct {
    Produto *produto;
    int quantidade;
} Item;

typedef struct {
    Item itens[ITEM_COUNT];
} Pedido;



char* descricao(Produto *p) {
    char *buf = malloc(50);
    sprintf(buf, "[%d] %s $%f", p->id, p->nome, p->preco);
    return buf;
}

float subtotal(Item *i) {
    return i->produto->preco * i->quantidade;
}

float total(Pedido *pedido) {
    float total = 0;
    for(int i = 0; i < ITEM_COUNT; i++) {
        total += subtotal(&pedido->itens[i]);
    }
    return total;
}

int main(int argc, const char * argv[])
{
    Produto *p1 = (Produto *)malloc(sizeof(Produto));
    Produto *p2 = (Produto *)malloc(sizeof(Produto));
    Item *i1 = (Item *)malloc(sizeof(Item));
    Item *i2 = (Item *)malloc(sizeof(Item));
    Pedido *o = (Pedido *)malloc(sizeof(Pedido));
    
    p1->preco = 30.0;
    p2->preco = 45.0;
    p1->nome  = "Almoço";
    p2->nome  = "Jantar";
    p1->id = 1;
    p2->id = 2;
    
    i1->produto = p1;
    i2->produto = p2;
    i1->quantidade = 2;
    i2->quantidade = 3;
    
    o->itens[0] = *i1;
    o->itens[1] = *i2;
    
    char *desc1 = descricao(p1);
    char *desc2 = descricao(p2);
    
    printf("%s\n", desc1);
    printf("%s\n", desc2);
    printf("Subtotal i1 %f\n", subtotal(i1));
    printf("Subtotal i1 %f\n", subtotal(i2));
    printf("Total: %f\n", total(o));
    
    free(p1);
    free(p2);
    free(i1);
    free(i2);
    free(o);
    free(desc1);
    free(desc2);
    
    return 0;
}

