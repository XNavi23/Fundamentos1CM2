#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //Arreglos unidimensionales
    int a[4]; //Primera forma de declarar arrays
    int b[4]={0,1,2,3}; //Segunda forma de declarar arrays
    
    for(int i=0;i<4;i++){
        a[i]=i;
        printf("%d, ",a[i]);
    }
    printf("\n %d\n",b[3]);
    
    int A[5][5];
    int B[3][4] = {(0, 1, 2, 3), (1, 2, 3, 4), (3, 2, 1, 0)};
    printf("%d\n",B[2][3]);
    printf("%d\n",B[3][4]);
    
    
    return (EXIT_SUCCESS);
}

