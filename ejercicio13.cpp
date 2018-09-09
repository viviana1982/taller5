//pedir su nombre al usuario y devolver el numero de vocales que hay

#include <stdio.h>
#include <stdlib.h>
int numeroVocales(char *);
int main()
{
    char nombre[30];

    printf("ingrse el nombre\n");
    fgets(nombre, 30, stdin);
    printf("el numero de vocales es: %i",numeroVocales(nombre));

    return 0;
}

int numeroVocales(char *vocal){
    int cont=0;

    while(*vocal){
        switch(*vocal){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':    cont ++;

        }

        vocal++;
    }
    return cont;
}
