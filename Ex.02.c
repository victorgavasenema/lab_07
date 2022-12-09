#include <stdio.h>

int main()
{
    printf("Escreva uma frase e receba quantidade de 1 dela: ");
    char frase [300];
    int i, j = 0;
    fgets(frase, 300, stdin);
    
    for (i = 0; frase[i] != '\0'; i++){
        if(frase[i] == '1'){
            j++;
        }
    }
    
    printf("A quantidade 1 digitado eh: %d", j);
    
    return 0;
}