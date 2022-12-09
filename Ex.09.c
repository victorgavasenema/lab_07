#include <stdio.h>

int main()
{
    char carro [5][15];
    int litros[5], quilometros[5], kml[5];
    int i, j, k, x, mlkm;
    for (i = 0; i < 5; i++){
        printf("Escreva o modelo do carro (%d): ", i);
        fgets(carro[i], 15, stdin);
    }
    for (i= 0; i < 5; i++){
        for (j = 0; carro[i][j] != '\0'; j++){
            printf("%c", carro[i][j]);
            }
        printf("Escreva o consumo em litros do carro:");
        scanf("%d", &litros[i]);
        printf("Escreva a quilometragem: ");
        scanf("%d", &quilometros[i]);
        kml[i] = quilometros[i] / litros[i];
    }
    
    x = kml[0];
    for (i = 0; i < 5; i++){
        if(x < kml[i]){
            x = i;
        }
    }
    
    printf("O modelo de carro mais economico eh: ");
    for (i = 0; carro[x][i] != '\0'; i++){
        printf("%c", carro[x][i]);
    }
    
    mlkm = kml[x]*100;
    printf("A quantidae de litros para esse modelo fazer 100 kms eh: %d", mlkm);
    
    return 0;
}