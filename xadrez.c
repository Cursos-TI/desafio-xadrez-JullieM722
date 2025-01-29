#include <stdio.h>

// Desafio de Xadrez - MateCheck

void bispo (){ //Void para o movimento do bispo
    for (int i = 0; i < 5; i++) { // for para que o bloco de codigo rode 5 vezes
        for (int j = 0; j < 1; j++) //segundo for para printar no terminal o primeiro movimento do bispo
        printf("Direita, ");
    printf("cima \n"); //impressao do segundo movimento do bispo
    }
}

void torre (){ //Void para o movimento da torre
    for(int i = 0; i < 5; i++) //enquanto i for menor que 5, "direita" é imprimido na tela
        printf("Direita.\n");
}

void rainha (){ //Void para o movimento da rainha
    for(int i = 0; i < 8; i++) //enquanto i for menor que 8, "esquerda" é imprimido na tela
        printf("Esquerda.\n");
}

int main() {
    int escolha; //Variavel para o usuário interagir com o menu

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
            case 1: //movimento do bispo
                printf("-------------------- MOVIMENTANDO O BISPO -------------------- \n\n");
                bispo(); //puxa função recursiva bispo, para o movimento do mesmo
                break;
            
            case 2: //movimento da torre
                printf("-------------------- MOVIMENTANDO A TORRE -------------------- \n\n");
                torre(); //puxa função recursiva torre, para o movimento da mesma
                break;

            case 3: //movimento da rainha
                printf("-------------------- MOVIMENTANDO A RAINHA -------------------- \n\n");
                rainha(); //puxa função recursiva rainha, para o movimento da mesma
                break;

            case 4: //movimento do cavalo
                printf("\n\n-------------------- MOVIMENTANDO O CAVALO -------------------- \n\n");
                for(int i = 0, j = 3; i < 3; i++, j--){//enquanto i < 3, é executado o bloco de código
                    printf ("Cima.\n");
                    if (j > 1) continue; //Se j > 3, "print("direita")" será "pulado"
                    else //quando finalmente j <= 1, o cavalo fará o movimento para a direita
                        printf("Direita.\n");
                }
                break;

            case 5: //encerra o programa
                printf("\n\n***** SAINDO... *****\n\n\n");
                break;

            default: // para o caso do usuario inserir um valor diferente de 1 a 5 
                printf("***** VALOR INVÁLIDO!! *****\n\n\n");
                break;
        }
    } while (escolha != 5); //Encerramento do loop.
    
    return 0;
    
}