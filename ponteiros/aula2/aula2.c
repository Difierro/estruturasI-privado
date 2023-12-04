#include <stdlib.h>
#include <stdio.h>

void incremento(int * ponteiro){
    (*ponteiro)++;
}

int main(){
    int num = 5;
    incremento(&num);

    printf("%d", num);
    return 0;
}