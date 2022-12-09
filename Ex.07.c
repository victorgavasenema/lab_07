#include <stdio.h>

int main()
{
    printf("Escreva uma frase: ");
    char frase [300];
    int i;
    fgets(frase, 300, stdin);
    
    for (i = 0; frase[i] != '\0'; i++){
        if (frase[i] == ' '){
            i++;
        }
        printf("%c", frase[i]);
    }
    
    return 0;
}