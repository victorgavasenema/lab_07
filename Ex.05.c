#include <stdio.h>

int main()
{
    printf("Escreva uma frase: ");
    char frase [300];
    int i;
    fgets(frase, 300, stdin);
    
    for (i = 0; frase[i] != '\0'; i++){
        if (frase[i] >= 65 && frase[i] <= 90){
            frase[i] = frase[i] + 32;
        }
        printf("%c", frase[i]);
    }
    
    return 0;
}