#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Error!\n");
        return EXIT_FAILURE;
    }

    int a = strtol(argv[1], NULL, 10);
    if(a < 0)
    {
        printf("Bitte gib eine positive Ganzzahl ein!\n");
        return EXIT_FAILURE;
    }


    bool isNotPowerOf = false;
    int counter = 0;

    while(a > 1)
    {
        if(a % 3 != 0)
        {
            isNotPowerOf = true;
            break;
        }
        a = a / 3;
        counter++;
    }

    if(!isNotPowerOf){
        printf("%d\n", counter);
    }
    else{
        printf("Keine Dreierpotenz!\n");
    }

    return EXIT_SUCCESS;
}

/*
 Dreierpotenzen:
 3^0 = 1
 3^1 = 3
 3^2 = 9
 3^3 = 27
 3^4 = 81
 3^5 = 243
 */