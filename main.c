#include <stdio.h>
int main() { #include <stdio.h>
int main() { const char *meses[] = {
"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
int numero;
printf("Digite o numero de um mes (1 a 12): ");
if (scanf("%d", &numero) != 1) { printf("Erro: Por favor, digite apenas numeros inteiros.\n");
return 1; }
if (numero >= 1 && numero <= 12) {
printf("O mes correspondente e: %s\n", meses[numero]); } else {
        
  printf("Erro: Valor informado nao e valido. Digite um numero entre 1 e 12.\n");
    }
return 0;
}
    return 0;
}
