#include <stdio.h>
#include <limits.h>
#include <float.h>
int main () {
    // unsigned char -> 0 a 255
    // unsigned int -> 0 a 4bi
    //short int -> -32mil a 32mil
    //unsigned short int -> 0 a 65mil
    //long int -> -nonilhao a nonilhao
    //unsigned long int -> 0 a 18lhao
    //long double -> -1.2E+4932 a 1.2E+4932
    // long double -> quase 0 a um numero que nao sei pronunciar
    
    printf("o tipo 'short int' ocupa %i bytes(s)\n", sizeof(short int));
    printf("o tipo 'long int' ocupa %i bytes(s)\n", sizeof(long int));
    printf("o tipo 'long double' ocupa %i bytes(s)\n", sizeof(long double));
    
    printf("o tipo 'unssigned char' vai de 0 a %i\n", UCHAR_MAX);
    printf("o tipo 'unssigned int' vai de 0 a %i\n", UINT_MAX);
    printf("o tipo 'short int' vai de 0 a %i\n", SHRT_MIN, SHRT_MAX);
    printf("o tipo 'unssigned shot' vai de 0 a %i\n", USHRT_MAX);
    printf("o tipo 'long int' vai de %i a %i\n", LONG_MIN, LONG_MAX);
    printf("o tipo 'unsigned long' vai de 0 a %u\n", ULONG_MAX);
    printf("o tipo 'long double' vai de %LE a %LE\n", LDBL_MIN, LDBL_MAX);

    
    return 0;
}