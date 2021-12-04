#include <stdlib.h>
#include <stdio.h>


int main(){

    char my_string[5];
    printf("Bitte gib einen String ein: ");
    scanf("%s", my_string);
    printf("%s\n", my_string);

    char hello[] = "Hello World!";
    printf(hello);

    return EXIT_SUCCESS;
}