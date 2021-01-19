#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo[100];
    int i;
    for(arreglo[0]=2, i=0;i<100;i++){
    
        if(i>0){
            arreglo[i]=arreglo[i-1]+i;
        }
        printf("arreglo[%d] = %d\n",i,arreglo[i]);
    }
    
    return (0); 
}

