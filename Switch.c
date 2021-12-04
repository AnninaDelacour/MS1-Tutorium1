#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* AVAILABEL ICE CREAM FLAVOURS:
    vanilla = 0;
    chocolate = 1;
    strawberry = 2;
    lemon = 3;
    */

    if(argc < 1){
        printf("Error! Please enter a valid number of arguments!");
        return EXIT_FAILURE;
    }

    int selection = atoi(argv[1]);

    switch (selection) {
        case 0: {
            printf("Vanilla it is!\n");
            break;
        }
        case 1: {
            printf("Chocolate it is!\n");
            break;
        }
        case 2: {
            printf("Strawberry it is!\n");
            break;
        }
        case 3: {
            printf("Lemon it is!\n");
            break;
        }
        default: {
            printf("Error!\n");
            printf("Please enter a valid ice cream flavour!\n");
        }
    }

    return EXIT_SUCCESS;
}