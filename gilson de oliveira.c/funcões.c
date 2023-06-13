#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void mostrarSitu (char disciplinas[][250], float media[]){
    int i;
    for(i=0; i < 3; i++){
        printf ("%iª disciplinas:%s\n", i + 1, disciplinas[i]);
        if (media[i]>=7){
printf("situação:aprovado.\n\n");
        }
        else if (media[i]>=5){
            printf("situação:recuperação.\n\n");
        }
        else{
            printf("situação:reprovado.\n\n");
        }
    }
}
void mostrarMedia(char disciplinas[][250], float media[]){
    int i;
    for(i=0;i<3; i++){
        printf("%iª disciplina:%s\n",i+1, disciplinas[i]);
        printf("media:%.1f\n\n",media[i]);
    }
}
void todainfo (char disciplinas[][250], float media []){
    int i;
    for(i=0;i<3;i++){
        printf("%iª disciplinas: %s\n", i+1, disciplinas[i]);
        if(medial[i]=7){
            
        }
    }
}
}