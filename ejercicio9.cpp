#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[10], *pvect;
    for(int i=0; i<10; i++){
    printf("digite un numero\n");
    scanf("%d",&vect[i]);

    }
    pvect= &vect;
    for(int i=0; i<10; i++){
        if(*pvect%2==0){
            printf("el numero %d es par\n",*pvect);
            printf("la posicion en memoria es %p\n",pvect);
            printf("\n");
        }
        pvect++;
    }

    return 0;
}
