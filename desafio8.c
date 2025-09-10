#include <stdio.h>
int main(){

// Bispo - 5 Casas - Frete e Direita (Diagonal)
// Rainha - 8 Casa - Esquerda
// Torre - 5 Casas - Frente

int casabispo = 1, casarainha = 1, casatorre = 1;


//Bispo andando uma casa a diagonal (frente e direita)
while (casabispo <= 5){
    printf("Bispo anda uma casa a frente e a direita (Diagonal). \n");
casabispo++;
}

//Rainha andando uma casa a esquerda
do {
    printf("Rainha anda uma casa a esquerda.\n");
    casarainha++;
} while (casarainha <= 8); 

//Torre andando uma casa a frente
for (casatorre = 1; casatorre <= 5; casatorre++) {
    printf("Torre anda uma casa a frente.\n");
}
}
