/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    #include <stdio.h>

int main() {
    // Vetor de strings com os meses do ano
    // O índice 0 possui uma string vazia para alinhar os índices 1-12 com os meses corretos
    const char *meses[] = {
        "", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int numero;

    // Solicita o valor numérico ao usuário
    printf("Digite o numero de um mes (1 a 12): ");
    
    // Valida se a entrada é um número inteiro válido
    if (scanf("%d", &numero) != 1) {
        printf("Erro: Por favor, digite apenas numeros inteiros.\n");
        return 1;
    }

    // Valida se o número está no intervalo correto
    if (numero >= 1 && numero <= 12) {
        printf("O mes correspondente e: %s\n", meses[numero]);
    } else {
        printf("Erro: Valor informado nao e valido. Digite um numero entre 1 e 12.\n");
    }

    return 0;
}


    return 0;
}