#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "mascote.h"
struct mascote{
    char nome[50];
    int felicidade;
    int energia;
    int fome;


};



Mascote* mascote_cria(char* nome) {

    Mascote* novo_mascote = (Mascote*) malloc((sizeof( struct mascote)));
    strcpy(novo_mascote->nome, nome);
    novo_mascote->fome = 50;
    novo_mascote->energia = 50;
    novo_mascote->felicidade = 50;
    
    return novo_mascote;
}

void mascote_alimentar(Mascote* m){

    m->fome -=   5;
        if(m->fome > 100 || m->fome < 0)
            printf("Erro: fome fora do intervalo [0, 100]\n");  
    m->energia += 5;
        if(m->energia > 100 || m->energia < 0)
            printf("Erro: energia fora do intervalo [0, 100]\n");

}

void mascote_brincar(Mascote* m){

    m-> felicidade += 5;
        if(m->felicidade > 100 || m->felicidade < 0)
            printf("Erro: felicidade fora do intervalo [0, 100]\n");   
    m-> fome += 5;
        if(m->fome > 100 || m->fome < 0)
            printf("Erro: fome fora do intervalo [0, 100]\n");             

    m-> energia -= 5;
    if(m->energia > 100 || m->energia < 0)
        printf("Erro: energia fora do intervalo [0, 100]\n");

}

void mascote_status(Mascote* m){

    printf("STATUS DE %s:\n", m->nome);
    printf("Fome: %d\n", m->fome);
    printf("Energia: %d\n", m->energia);
    printf("Felicidade: %d\n", m->felicidade);

}

void mascote_libera(Mascote* m){ 

    free(m);
}