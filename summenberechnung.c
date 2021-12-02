#include <stdio.h>
#include <stdlib.h>

int main(){

    // Variablennamen dürfen nicht mit Zahlen beginnen
    // Variablen müssen einem Datentyp zugeordnet werden

    int my_sum = 0; // Deklaration + Initialisierung der Variable
    int limit = 20;

    for(int count = 2; count < limit; count = count + 3){
        my_sum += count;
    }

    printf("Summe beträgt %d\n", my_sum);

    return EXIT_SUCCESS;
}
