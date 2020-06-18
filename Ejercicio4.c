#include <stdio.h>

#define MSJ_RECIBIR_CARACTER "Ingrese un caracter en minuscula:\n"
const char DEF_MINUSCULA= 'm';
const char DEF_MAYUSCULA= 'M';

const int VALOR_CAMBIO_MAYUS= 32;
int main(){

    char miniscula = DEF_MINUSCULA;
    char mayuscula = DEF_MAYUSCULA;

    printf(MSJ_RECIBIR_CARACTER);
    scanf(" %c", &miniscula);
    mayuscula = miniscula - VALOR_CAMBIO_MAYUS;

    printf("El caracter recibido en minuscula fue %c y su valor en mayuscula es %c", miniscula, mayuscula);

    return 0;

}