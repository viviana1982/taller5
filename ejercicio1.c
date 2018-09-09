#include <stdio.h>
#include <stdlib.h>
void pedirDatos();
void matriz1(int matriz[4][4], int num1, int num2, int num3, int num4);
void imprimiendoMatriz(int matriz[4][4]);

int num1, num2, num3, num4;
int *pnum1, *pnum2, *pnum3, *pnum4;
int matriz[4][4];

int main()
{
    pedirDatos();
    matriz1(matriz,num1,num2,num3,num4);
    imprimiendoMatriz(matriz);
    return 0;
}
void pedirDatos(){
    printf("ingrese 4 numeros\n");
    scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
}
void matriz1(int matriz[4][4], int num1, int num2, int num3, int num4){
    pnum1=&num1, pnum2=&num2;
    pnum3=&num2, pnum4=&num4;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==0&&j==0){
                matriz[i][j]=num1;
            }
            if(i==1&&j==0){
                matriz[i][j]=num2;
            }
            if(i==2&&j==0){
                matriz[i][j]=num3;
            }
            if(i==3&&j==0){
                matriz[i][j]=num4;
            }
            if(i==0&&j==1){
                matriz[i][j] = num1*num1;
            }
            if(i==1&&j==1){
                matriz[i][j]=num2*num2;
            }
            if(i==2&&j==1){
                matriz[i][j] =num3*num3;
            }
            if(i==3&&j==1){
                matriz[i][j] =num4*num4;
            }
            if(i==0&&j==2){
                matriz[i][j] = num1*num1*num1;
            }
            if(i==1&&j==2){
                matriz[i][j] = num2*num2*num2;
            }
            if(i==2&&j==2){
                matriz[i][j] = num3*num3*num3;
            }
            if(i==3&&j==2){
                matriz[i][j] = num4*num4*num4;
            }
            if(i==0&&j==3){
                matriz[i][j] = num1*num1*num1*num1;
            }
            if(i==1&&j==3){
                matriz[i][j] = num2*num2*num2*num2;
            }
            if(i==2&&j==3){
                matriz[i][j] = num3*num3*num3*num3;
            }
            if(i==3&&j==3){
                matriz[i][j] = num4*num4*num4*num4;
            }
        }
    }
}

void imprimiendoMatriz(int matriz[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
