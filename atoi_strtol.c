#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){

    if(argc < 2){
        printf("Error!");
    }

    int umwandlung_von_argv = atoi(argv[1]);
    printf("Das übergebene Kommandozeilenargument an Stelle [1] ist: %d\n", umwandlung_von_argv);

    long long_umwandlung = atol(argv[2]);
    printf("Das übergebene Kommandozeilenargument an Stelle [2] ist: %ld\n", long_umwandlung);

    float float_umwandlung = atof(argv[3]);
    printf("Das übergebene Kommandozeilenargument an Stelle [3] ist: %.2f\n", float_umwandlung);
    // %.2f = Damit wird ausgedrückt, dass man nur zwei Nachkommazahlen haben möchte

    return EXIT_SUCCESS;
}

