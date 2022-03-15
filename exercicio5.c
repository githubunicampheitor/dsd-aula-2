#include <stdio.h>

int main(){
    typedef struct{
    float codigo;
    float valor;
    float quantidade;
    }peca;

    peca peca1;
    peca peca2;

    scanf("%f %f %f", &peca1.codigo, &peca1.quantidade, &peca1.valor);
    scanf("%f %f %f", &peca2.codigo, &peca2.quantidade, &peca2.valor);
    float valortotal = (peca1.quantidade * peca1.valor) + (peca2.quantidade * peca2.valor);
    printf("VALOR A PAGAR: R$ %.2f", valortotal);
}