#include <stdio.h>

int main()
{
    char frase[100];
    int i, x = 0, k;
    printf("Escreva uma frase (apenas letras): ");
    fgets(frase, 100, stdin);
    
    for(i = 0; frase[i] != '\0'; i++){
        x = i;
        if(frase[i] >= 65 && frase[i] <= 90){
           frase[i] = frase[i] + 32;
        }
    }
    k = x - 1;
    for (i = 0; i < x; i++){
        if (frase[k] == ' '){
            k--;
        }
        if (frase[i] == ' '){
            i++;
        }
        if(frase[i] != frase[k]){
            printf("Nao eh palindromo\n");
            return 0;
        }
        printf("%c = %c", frase[i], frase[k]);
        k--;
    }
    
    printf("Eh palindromo\n");
    
    return 0;
}