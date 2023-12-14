/* Crie um tipo estruturado para representar uma conta bancária, cujos campos são: o nome do cliente, o número da conta e um saldo. Crie uma variável do tipo estrutura e escreva instruções para inicializar seus campos. Em seguida, implemente uma função para realizar um depósito em uma estrutura do tipo struct contaBancaria. Sua função deve obedecer ao seguinte protótipo: void deposita(float valor, struct contaBancaria* conta); */

#include <stdio.h>
#include <stdlib.h>

struct contaBancaria{
    char nomeCliente[50];
    int numeroConta;
    float saldo;
};


void deposita(float valor, struct contaBancaria* conta); 

int main (void){
    float valor = 0.0;
    struct contaBancaria conta;

    printf("Digite o valor a ser depositado: \n");
    scanf("%f", &valor);

    deposita(valor, &conta);

    return 0;
}

void deposita(float valor, struct contaBancaria* conta){
    printf("Digite seu nome: ");
    scanf(" %49s", conta->nomeCliente);
    printf("Digite o numero da sua conta: ");
    scanf(" %d", &conta->numeroConta);

    conta->saldo += valor;
}