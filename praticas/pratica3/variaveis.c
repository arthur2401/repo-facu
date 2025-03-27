#include <stdio.h>

int main (){
    char tecla;
    tecla = 'A';
    printf("tecla = %c\n", tecla);
    tecla = 100 ;
    printf("tecla = %c\n", tecla);
    
    int numero = 10;
    printf("Numero = %i\n", numero);
    //int numero; aqui num pode
    {
        int numero = 20; //aqui pode
        printf("Numero = %i\n", numero);
    }
    {
    float media = 9.5f;
    printf("numero = %.1f\n", media);
    }

    {
    char a;
    scanf("%c", &a);
    printf("%c", a);
    }
    return 0;

}
