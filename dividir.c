int dividir(int numerador, int divisor) {
    if (divisor == 0) {
        printf("ERRO: Tentativa de divisao por zero. Retornando 0.\n");
        return 0; 
    }
    
    return numerador / divisor;
}
