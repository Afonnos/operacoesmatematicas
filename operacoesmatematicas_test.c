#include <assert.h> 
#include <stdio.h>

int multiplicar(int a, int b);
int dividir(int numerador, int divisor);

int main() {
   
    
    assert(multiplicar(10, 5) == 50);
    printf("Teste de Multiplicacao 1 (10 * 5) OK.\n");

    assert(multiplicar(-7, 3) == -21);
    printf("Teste de Multiplicacao 2 (-7 * 3) OK.\n");

    assert(multiplicar(-4, -6) == 24);
    printf("Teste de Multiplicacao 3 (-4 * -6) OK.\n");

    assert(multiplicar(0, 99) == 0);
    printf("Teste de Multiplicacao 4 (0 * 99) OK.\n");

    assert(dividir(10, 2) == 5);
    printf("Teste de Divisao 5 (10 / 2) OK.\n");

    assert(dividir(20, -4) == -5);
    printf("Teste de Divisao 6 (20 / -4) OK.\n");

    assert(dividir(-15, -3) == 5);
    printf("Teste de Divisao 7 (-15 / -3) OK.\n");
    
    assert(dividir(10, 0) == 0); 
    printf("Teste de Divisao 8 (10 / 0) OK (Erro tratado e 0 retornado).\n");
    
    printf("\nTodos os testes foram executados com sucesso!\n");
    
    return 0;
}
