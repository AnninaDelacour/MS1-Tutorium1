#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    int a = 1;
    unsigned int b = 1u;
    float c = 1.0f;
    double d = 1.0;
    char e = 42;
    long f = 3203423423;
    long long g = 2034234930249320;

    // Source: https://en.wikipedia.org/wiki/C_data_types
    //         https://www.tutorialspoint.com/c_standard_library/limits_h.htm

    printf("char Größe: %d Byte\n\n", sizeof(char));

    printf("int Größe: %d Byte\n", sizeof(int));
    printf("Wertebereich von %d bis %d\n\n", USHRT_MAX);

    printf("unsigned int Größe: %u Byte\n", sizeof(unsigned int));
    printf("Wertebereich von 0 bis %u\n\n", USHRT_MAX);

    printf("float Größe: %d Byte\n", sizeof(float));

    printf("double Größe: %d Byte\n\n", sizeof(double));

    printf("long Größe: %d Byte\n", sizeof(long int));
    printf("Wertebereich von %d bis %d\n\n", LONG_MIN, LONG_MAX);
    // https://stackoverflow.com/questions/18901080/why-is-the-sizeofint-sizeoflong

    printf("long long Größe: %d Byte\n", sizeof(long long));
    printf("Wertebereich von %lld bis %lld\n\n", LLONG_MIN, LLONG_MAX);


    return 0;
}
