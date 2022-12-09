#include <stdio.h>

int main()
{
    char S[40];
    int i, x, n1, n2, n3;
    printf("Digite uma string: \n");
    fgets(S,40,stdin);
    
    for(i = 0; S[i] != '\0'; i++){
        x = i;
    }
    
    do{
    printf("Digite dois inteiros positivos menor que %d: \n", x);
    scanf("%d %d",&n1,&n2);
    }while(n1 < 0 || n2 < 0 || n2 > x || n1 > x);
    
    if(n1 > n2){
        n3 = n1;
        n1 = n2;
        n2 = n3;
    }
    
    for(i = n1;i <= n2; i++){
        printf("%c",S[i]);
    }
    
    return 0;
}