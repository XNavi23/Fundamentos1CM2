#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int cant, aux;
    printf("Ingresa la cantidad del arreglo: ");
    scanf("%d",&cant);
    
    int array[cant];
    int i = 0;
   
    for(i;i < cant;i++){
        printf("Defina el valor %d: ",i+1);
        scanf("%d", &array[i]);
    }
    // ~(UwU)~ 
    i=0;
    int j;
    
    for(i=0;i<cant;i++){
        for(j=0;j<cant;j++){
            if(array[j] > array[j+1]){
            
            }
        }
    }
    
    return (EXIT_SUCCESS);
}

