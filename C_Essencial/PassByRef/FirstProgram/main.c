//
//  main.c
//  FirstProgram
//
//  Created by Helder Da Rocha on 2/16/14.
//  Copyright (c) 2014 Helder Da Rocha. All rights reserved.
//

#include <stdio.h>
#include <time.h>

void structs_example()
{
    long utcNow = time(NULL);
    struct tm now;
    localtime_r(&utcNow, &now);
    printf("Now is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
}

void converte(float reais,
              float *dolares,
              float *euros,
              float *rublos,
              float *libras) {
    
    float eur = 0.729980291;
    float brl = 2.38889831;
    float rub = 35.0889505;
    float gbp = 0.597300203;
    
    if (dolares && euros && rublos && libras) {
        *dolares = reais / brl;
        *euros   = reais / brl * eur;
        *rublos  = reais / brl * rub;
        *libras  = reais / brl * gbp;
    }

}

int main(int argc, const char * argv[])
{

    float usd, eur, rub, gbp;
    converte(100, &usd, &eur, &rub, &gbp);

    printf("%3.2f BRL is %3.2f USD, %3.2f EUR, %3.2f RUB, %3.2f GBP\n", 100.0, usd, eur, rub, gbp);
    
    structs_example();

    return 0;
}



