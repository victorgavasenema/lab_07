#include <stdio.h>

int main()
{
    char frase [300];
    char c1, c2;
    int i;
    
    printf("Escreva uma frase: ");
    fgets(frase, 300, stdin);
    printf("Escreva a letra que você quer substituir e a letra que a substituira: ");
    scanf("%c %c", &c1, &c2);
    
    for (i = 0; frase[i] != '\0'; i++){
        if (frase[i] == c1){
            frase[i] = c2;
        }
        printf("%c", frase[i]);
    }
    
    return 0;
}