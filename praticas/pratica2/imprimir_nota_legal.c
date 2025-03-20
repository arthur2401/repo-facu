#include <stdio.h>

int main (){
    printf("------- --------------------------------\n");
    printf("          N O T A    L E G A L          \n");
    printf("---------------------------------------- \n");
    printf("Item            Qtd           Valor Uniratio  \n");
    printf("%s %7.03i %8.2f %8.2f\n","camiseta", 2,2.0,4.0);
    printf("%s %10.03i %8.2f %8.2f\n","calca", 1,5.0,5.0);
    printf("%s %4.03i %9.2f %8.2f\n","meia social", 3, 10.0, 10.0);
    printf("---------------------------------------- \n");
    printf("                    TOTAL: R$ %7.2f\n", 19.0);
    return 0;
}