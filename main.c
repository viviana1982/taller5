#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *pnum, cont=0;
    printf("ingrese un numero\n");
    scanf("%d",&num);

    *pnum = &num;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            cont++;
        }
    }
    if(cont>2){
        printf("el numero no es primo\n");
    }else{
        printf("el numero es primo\n");
        printf("posicion de memoria %p\n",pnum);
    }
    return 0;
}
