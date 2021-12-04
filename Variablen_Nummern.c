#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int = integer number (32bit / 4 byte)
    int my_number1;  // Declaration
    my_number1 = 42; // Initialisierung
    int my_number2 = 1337;
    int my_number3 = my_number2; // Der Wert in my_number2 wird in my_number3 gespeichert

    // unsigned int (32bit / 4 byte)
    unsigned int my_number4 = 0;
    printf("%u\n", my_number4);

    // float = floating point (32bit / 4 byte)
    float my_number5 = 1.25f; //kann auch einfach als 1.25 geschrieben werden -> "1.25f" entspricht mehr dem C-Standard
    printf("%f\n", my_number5);

    // double = floating point (64bit / 8 byte)
    double my_number6 = 1.25;
    printf("%.2lf\n", my_number6);

    return EXIT_SUCCESS;
}