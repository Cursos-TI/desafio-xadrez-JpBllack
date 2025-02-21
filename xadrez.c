#include <stdio.h>

void moverBispo (int passos)
{
    if (passos == 0)
    return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispo(passos - 1);
}

void moverTorre(int passos)
{
    if (passos == 0)
    return;

    printf("Direita\n");

    moverTorre(passos - 1);
    
}

void moverRainha(int passos)
{
    if (passos == 0)
    return;
    
    printf("Esquerda\n");

    moverRainha(passos - 1);
}

int main() {
    
    int movimentoCavalo = 2;

    // Movimento do Bispo (5 vezes na diagonal superior direita)
    printf("Movimentos do Bispo\n");
    moverBispo(5);

    // Movimento da Torre (5 vezes para a direita)
    printf("\nMovimentos da Torre\n");
    moverTorre(5);
    // Movimento da Rainha (8 vezes para a esquerda)
    printf("\nMovimentos da Rainha\n");
    moverRainha(8);

    printf("\nMovimentos do Cavalo\n");
     while (movimentoCavalo--)
    {
      for (int i = 0; i < 2; i++)
      {
        printf("Cima\n");
      }

    if(movimentoCavalo < 0)
    {
        break;
    }

    printf("Esquerda\n");
    printf("-----------\n");
      
    }
   
    

    return 0;
}
