#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vector[]={32.583, 11.239, 45.781, 22.237};
    float *pvector = &vector;


    for(int i=0; i<4; i++){
        printf("%1.3f\n",pvector[i]);
    }

    return 0;
}
