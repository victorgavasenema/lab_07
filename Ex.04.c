#include <stdio.h>

int main()
{
    printf("Escreva uma frase: ");
    char frase [300];
    int i, j = 0;
    fgets(frase, 300, stdin);
    
    for (i = 0; frase[i] != '\0'; i++){
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            frase[i] = 'J';
            j++;
        }
        printf("%c", frase[i]);
    }
    printf("Existiam %d vogais na frase", j);
    
    return 0;
}