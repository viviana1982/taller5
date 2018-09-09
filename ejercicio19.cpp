
#include <stdio.h>
#include <stdlib.h>

struct competidor{
    char nombre[30];
    int edad;
    char sexo[15];
    char club[20];
}atleta1;

int main(){
    //Pidiendo datos al atleta
    printf("Ingresando datos atleta\n");
    printf("Ingrese su nombre: ");
    fgets(atleta1.nombre, 30, stdin);
    printf("Ingrese su edad: ");
    scanf("%d",&atleta1.edad);
    fflush(stdin);
    printf("Ingrese su sexo: ");
    fgets(atleta1.sexo, 15, stdin);
    printf("Ingrese su club: ");
    fgets(atleta1.club, 20, stdin);
    system("pause");
    system("cls");

    //Imprimir los datos
    printf("Ingresando datos atleta\n");
    printf("Nombre: %s\n", atleta1.nombre);
    printf("Edad: %d\n", atleta1.edad);
    printf("Sexo: %s\n", atleta1.sexo);
    printf("Club: %s\n", atleta1.club);
    if(atleta1.edad<=15){
        printf("Categoria: Infantil por su edad %d\n", atleta1.edad);
    }else if(atleta1.edad<=30){
        printf("Categoria: Joven por su edad %d\n", atleta1.edad);
    }else if(atleta1.edad>30){
        printf("Categoria: mayor por su edad %d\n", atleta1.edad);
    }
}







