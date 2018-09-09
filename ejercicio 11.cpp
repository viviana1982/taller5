#include <stdio.h>
#include <stdlib.h>
void pedirDatos();
void ordenAscendente(int vect[100], int tam);
int vect[100], tam, *pvect, i;

int main()
{
    pedirDatos();
    ordenAscendente(vect,tam);

    return 0;
}

void pedirDatos(){
    printf("ingrese el numero de elementos \n");
    scanf("%d",&tam);

    for(int i=0; i<tam;i++){
        printf("ingresar un numero\n");
        scanf("%d",&vect[i]);
    }
}

void ordenAscendente(int vect[100], int tam){
    int contador=1;
    pvect=&vect[i];

    for(int i=0;i<tam;i++){
        if(pvect[i]<vect[i+1]){
            contador++;
        }
    }
    if(contador==tam){
        printf("El vector esta ordenado\n");
    }else{
        printf("El vector no esta ordenado\n");
    }

}
