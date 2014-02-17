//
//  main.c
//  Estruturas
//
//  Created by Helder Da Rocha on 2/17/14.
//  Copyright (c) 2014 Helder Da Rocha. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a = 1;
    int b = 10;
    
    int solucao = a + b;
    
    char *hello = "Hello";
    
    printf("O conteudo do string é %s e ele esta em %p\n", hello, &hello);
    
    return 0;
}

