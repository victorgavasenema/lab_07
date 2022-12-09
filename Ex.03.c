#include <stdio.h>

int main()
{
    printf("Escreva uma frase: ");
    char frase [300];
    int i = 0;
    fgets(frase, 300, stdin);
    
    while (frase[i] != '\0'){
        i++;
        }

    while (i != -1){
         printf("%c", frase[i]);
         i--;
    }
    
    return 0;
}