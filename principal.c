/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

#define SALARIO_MINIMO 1100.00 // valor do salário mínimo em reais

int main() {
    float salario_fixo = 2 * SALARIO_MINIMO; // salário fixo de dois salários mínimos
    float comissao_fixa = 50.00; // comissão fixa por carro vendido
    float comissao_variavel = 0.05; // comissão variável de 5% para vendas acima de 10 carros

    int qtd_carros_vendidos;
    printf("Digite a quantidade de carros vendidos pelo vendedor: ");
    scanf("%d", &qtd_carros_vendidos);

    float valor_total_vendas = qtd_carros_vendidos * comissao_fixa;

    if (qtd_carros_vendidos > 10) {
        valor_total_vendas += (qtd_carros_vendidos - 10) * comissao_variavel * comissao_fixa;
    }

    float salario_total = salario_fixo + valor_total_vendas;

    printf("O salário total do vendedor é: R$ %.2f\n", salario_total);

    return 0;
}

