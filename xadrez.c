#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    int escolha;

    //Variaveis para movimento do cavalo
    int cavalo;
    int cav1 = 0;
    int cav2 = 0;

    do {
        printf("\n\n-------------------- MENU INTERATIVO --------------------\n\n");
        printf("O que deseja fazer? \n");
        printf("1 - Movimentar o Bispo. \n");
        printf("2 - Moviemntar a Torre. \n");
        printf("3 - Movimentar a Rainha. \n");
        printf("4 - Movimentar o Cavalo. \n");
        printf("5 - Sair. \n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("-------------------- MOVIMENTANDO O BISPO -------------------- \n\n");
                for (int i = 0; i < 5; i++)
                   printf("Cima, direita \n");
                break;
            
            case 2:
                printf("-------------------- MOVIMENTANDO A TORRE -------------------- \n\n");
                for (int i = 0; i < 5; i++)
                    printf("Direita \n");
                break;

            case 3:
                printf("-------------------- MOVIMENTANDO A RAINHA -------------------- \n\n");
                for (int i = 0; i < 8; i++)
                    printf("Esquerda \n");
                break;

            case 4:
                printf("Como gostaria de movimentar o cavalo?\n\n");
                printf("1 - Dois movimentos para baixo e um para cima.\n");
                printf("2 - Um movimento para baixo e dois para a esquerda.\n");
                scanf("%d", &cavalo);

                printf("%d \n", cavalo);

                printf("\n\n-------------------- MOVIMENTANDO O CAVALO -------------------- \n\n");

                switch (cavalo){
                    case 1:
                        for (int i = 0; i < 1; i++) {
                            for (int j = 0; j < 2; j++)
                                printf("Baixo \n");
                        printf("Esquerda \n");
                        }
                        break;
                    
                    case 2:
                        while (cav1 < 1) {
                            printf("Baixo \n");
                            while (cav2 < 2){
                                printf("Esquerda \n");
                                cav2++;
                            }
                            cav1++;
                        }
                        break;

                    default:
                        printf("***** VALOR INVÁLIDO!! *****\n\n\n");
                        break;
                }
                break;

            case 5:
                printf("\n\n***** SAINDO... *****\n\n\n");
                break;

            default:
                printf("***** VALOR INVÁLIDO!! *****\n\n\n");
                break;
        }
    } while (escolha != 5);
    
    return 0;
    
}
