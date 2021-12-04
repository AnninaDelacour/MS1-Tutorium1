#include <stdlib.h>
#include <stdio.h>


int main(){

    // 1 char = 8bit = 1byte, 2^8 = 256
    char c_value = 200; // -128, 127

    unsigned char uc_value = 200; // 0, 255


    printf("%d\n", c_value);
    printf("%d\n", uc_value);


    return EXIT_SUCCESS;
}