#include<stdio.h>
#include "mascote.h"    



int main(){

    char nome[50];
    int op=0;
    
    printf("Digite o nome do mascote: ");
        fgets(nome, 50, stdin);
    
    Mascote* mascote = mascote_cria(nome);

 
    do{
        printf("O que você deseja fazer com o mascote?\n");
        printf("1. Alimentar\n2. Brincar\n3. Ver Status\n0. Sair\n");
            scanf("%d", &op);   
        switch(op){
            case 1:
                mascote_alimentar(mascote);
                break;
            case 2:
                mascote_brincar(mascote);
                break;
            case 3:
                mascote_status(mascote);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    }while(op!=0);

    mascote_libera(mascote);
    return 0;   
}