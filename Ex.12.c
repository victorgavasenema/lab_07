#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[60];
    int i, x;
    
    printf("Digite uma frase: \n");
    fgets(frase, 60, stdin);
    
    x = strlen(frase);
    for(i = 0; i <= x; i++){
        if(frase[i] != ' ' && frase[i] != '\0' && frase[i] != '\n'){
            printf("%c",frase[i] - 29);
        }else{
            printf("%c",frase[i]);
        }
    }
    
    return 0;
}