#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void menor(int vect[], int tam);
int vect[100],tam, *pvect, i;

int main()
{
    pedirDatos();
    menor(vect,tam);

    return 0;
}

void pedirDatos(){
    printf("ingrese la cantidad de elementos del vector\n");
    scanf("%d",&tam);

    for(int i=0;i<tam;i++){
    printf("ingrese un numero\n");
    scanf("%d",&vect[i]);
    }
}

void menor(int vect[], int tam){
    int menor= 99999;
    pvect=&vect[i];

    for(int i=0;i<tam;i++){
        if(pvect[i]<menor){
            menor=pvect[i];
        }
    }
printf("el numero menor es: %d\n",menor);
printf("la posicion de la memoria es %p\n",pvect);
}
