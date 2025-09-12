#include <stdio.h>

// Bispo - 5 Casas - Frente e Direita (Diagonal)
// Rainha - 8 Casa - Esquerda
// Torre - 5 Casas - Frente
// Cavalo - 3 Casas - 2 casas para baixo e 1 casa para a esquerda


//Declaração Rainha
void casarainha(int qntcasas1){
    if (qntcasas1 > 0){
        printf("A rainha andou 1 casa a esquerda.\n");

        casarainha(qntcasas1 - 1);
    }
}

//Declaração Torre
void casatorre(int qntcasas2){
    if (qntcasas2 > 0){
        printf("A torre andou 1 casa a frente.\n");

        casatorre(qntcasas2 - 1);
    }
}

//Declaração Bispo
void casabispo(int qntcasas3){
    if (qntcasas3 > 0){
        for (int v = 0; v < 1; v++) {
            printf("O bispo andou uma casa a frente.\n");
        } for (int h = 0; h < 1; h++) {
            printf("O bispo andou uma casa a direita.\n");
        }
        casabispo(qntcasas3 - 1);
    }
}

//Declaração Cavalo
void casacavalo(int qntcasas4){
    if (qntcasas4 > 0){
        for (int i = 0; i < 2; i++) {
            printf("Cavalo anda uma casa para cima.\n");
        }

        printf("Cavalo anda uma casa para a direita.\n");

        casacavalo(qntcasas4 - 1);
    }
}


int main(){

printf("***Movimento da Rainha***\n");
casarainha(8);

printf("\n");

printf("***Movimento da Torre***\n");
casatorre(5);

printf("\n");

printf("***Movimento do Bispo***\n");
casabispo(5);

printf("\n");

printf("***Movimento do Cavalo***\n");
casacavalo(1);


}
