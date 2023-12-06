#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char * nome = (char *) malloc(50 * sizeof(char));
    if( nome == NULL){
        exit(1);
    }
    printf("digite seu nome: ");
    scanf("%s", nome);
    free(nome);
    //depois fazer para ler
    return 0;
}