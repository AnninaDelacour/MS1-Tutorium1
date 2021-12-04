#include <stdio.h>
#include <stdint.h>

int main()
{
    /*
     Mit <stdint.h> kann man sicherstellen, dass einen Variable z.B. immer einem int Datentyp zugewiesen wird,
     der 32bit hat. Das ist besonders wichtig und notwendig, wenn ein Programm auf verschiedenen Betriebssystemen
     laufen soll, man Microcontroller programmiert usw.

     --> "int8_t" ist ein Aliasname, den wir einer Variable als Datentyp zuweisen können.

     Source: https://en.cppreference.com/w/c/types/integer
     */

    int64_t a1 = 0;
    int32_t b1 = 0;
    int16_t c1 = 0;
    int8_t d1 = 0;

    printf("%ld\n", a1);

    printf("%d\n", b1);

    printf("%hd\n", c1);

    printf("%hhd\n", d1);

    return 0;
}