#include <stdio.h>
#include <stdlib.h>

int main (){
    float var = 3.14; //crio variavel
    float * point = &var; //crio pointer indicando para o endereço da variavel var
    *point = 3.1415; //reatribuo o valor da variavel var
    float pi = *point; // como pi esta recebendo o pointer, ele receberar os conteudo contido no endereço q point aponta.

    printf("%f", pi);

    return 0;
}