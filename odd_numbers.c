#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // int argc = Die Anzahl an Argumenten, die der Main Methode übergeben werden; Muss mindestens 1 Argument sein
    // char *argv[] = Bedeutet so viel wie "array von char *"; Ist ein Array von C-String-Pointer
    // Man könnte auch schreiben: char **argv --> Ist ein Pointer auf char *
    // Sources:
    // https://stackoverflow.com/questions/5157337/c-reading-command-line-parameters
    // https://stackoverflow.com/questions/43160958/passing-a-integer-through-command-line-in-c

    if(argc < 2){
        printf("Error!");
        return EXIT_FAILURE;
    }

    int a = atoi(argv[1]); // atoi wandelt einen String (-> char *argv[]) in ein Integer um

    if((a % 4) == 0){
        printf("True\n");
    } else {
        printf("False\n");
    }

    return EXIT_SUCCESS;
}
