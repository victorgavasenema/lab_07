#include <stdio.h>
#include <string.h>

void main()
{
  char S1[20], S2[20], c1, c2, op, substring[20];
  int i, j = 0, k, l;

  do
  {    
    printf("(a)Ler uma String S1\n");
    printf("(b)Imprimir o tamanho da String\n");
    printf("(c)Comparar a String S1 a S2 e imprimir seu resultado\n");
    printf("(d)Concatenar a S1 a uma nova S2 e imprimir seu resultado\n");
    printf("(e)Imprimir S1 reversa\n");
    printf("(f)Contar quantas vezes um caracter aparece\n");
    printf("(g)Substituir a primeira ocorrencia do caracter C1 da String S1\n");
    printf("(h)Verificar se uma String S2 é substring de S1\n");
    printf("(i)Retornar uma substring de S1\n");
    scanf("%c", &op);
    getchar();

    switch (op)
    {
    case 'a':
      printf("Digite a string S1:\n");
      fgets(S1, 20, stdin);
      S1[strlen(S1) - 1] = '\0';
      break;
      
    case 'b':
      printf("O tamanho da string S1 é %d\n", strlen(S1));
      break;
      
    case 'c':
      printf("Digite a string S2: ");
      fgets(S2, 20, stdin);
      printf(strcmp(S1, S2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
      break;
      
    case 'd':
      printf("Digite a string S2: ");
      fgets(S2, 20, stdin);
      printf("O resultado da concatenação é \"%s\"\n", strcat(S1, S2));
      break;
      
    case 'e':
      for (i = strlen(S1) - 1; i >= 0; i--)
      {
        printf("%c", S1[i]);
      }
      printf("\n");
      break;
      
    case 'f':
      printf("Digite o caracter: ");
      scanf(" %c", &c1);
      for (i = 0; S1[i] != '\0'; i++)
      {
        if (S1[i] == c1)
        {
          j++;
        }
      }
      printf("\nO caractere %c aparece %d vezes na S1\n", c1, j);
      break;
      
    case 'g':
      printf("Digite o caracter C1: ");
      scanf(" %c", &c1);
      printf("Digite o caracter C2: ");
      scanf(" %c", &c2);
      for (i = 0; S1[i] != '\0'; i++)
      {
        if (S1[i] == c1)
        {
          S1[i] = c2;
          break;
        }
      }
      printf("A string S1 é %s\n", S1);
      break;
      
    case 'h':
      printf("Digite a string S2: ");
      fgets(S2, 20, stdin);
      if (strstr(S1, S2) != NULL)
      {
        printf("A string S2 é substring de S1\n");
      }
      else
      {
        printf("A string S2 não é substring de S1\n");
      }
      break;
      
    case 'i':
      printf("Digite a posição: ");
      scanf("%d", &k);
      printf("Digite o tamanho: ");
      scanf("%d", &l);
      
      for (i = k; i <= l; i++)
      {
        substring[i] = S1[k + i];
      }
      substring[i + 1] = '\0';

      printf("A substring é %s\n", substring);
      break;
      
    }
  } while (op >= 'a' || op <= 'i');
}