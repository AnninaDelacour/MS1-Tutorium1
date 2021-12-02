#include <stdio.h> // Include: Ist ein Pre-Processor Command; wir inkludieren eine externe Bibliothek bzw. Paket
                   // <stdio.h> = Datei, die zur Standard-Lib von C gehört
                   // In dieser Datei liegen Funktionen vor, die für Input und Output verwendet werden
#include <stdlib.h>
#include <limits.h>

int main() // () = nimmt Paramter entgegen
{
    printf("Hello, World!\n"); // printf stammt aus <stdio.h>; damit kann man sich etwas in der Console ausgeben lassen
    printf("int Größe: %u Byte\n", sizeof(unsigned));
    printf("Wertebereich von 0 bis %u\n", USHRT_MAX);
    // Source: https://en.wikipedia.org/wiki/C_data_types
    //         https://www.tutorialspoint.com/c_standard_library/limits_h.htm
    return EXIT_SUCCESS;
}
