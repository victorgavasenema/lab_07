#include <stdio.h>

int main()
{
    char frase1[100], frase2[100];
    int i, n, x;
    printf("Escreva uma frase: ");
    fgets(frase1, 100, stdin);
    printf("Escreva uma para concatenar a primeira: ");
    fgets(frase2, 100, stdin);
    
    for(i = 0; frase1[i] != '\0'; i++){
        x = i;
    }
    
    do{
    printf("Escreva um numero inteiro  entre 0 e %d para concatenar essa quantidade de carcters da frase 2 a um: ",  x);
    scanf("%d", &n);
    }while(x < n);
    
    for(i = 0; i <= n; i++){
        printf("%c", frase2[i]);
    }
    for(i = 0; frase1[i] != '\0'; i++){
        printf("%c", frase1[i]);
    }
    
    return 0;
}