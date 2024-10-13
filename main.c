#include <stdio.h>

int main() {
    int esp, risultato = 1;

    printf("Inserisci un esponente (tra 2 e 20): ");
    scanf("%d", &esp);


    while (esp < 2 || esp > 20) {
        printf("Il numero non e' valido, inseriscine un altro (tra 2 e 20): ");
        scanf("%d", &esp);
    }


    int temp = esp;
    while (esp > 0) {
        risultato *= 2;
        esp--;
    }


    printf("2 elevato alla %d è %d\n", temp, risultato);

    return 0;
}