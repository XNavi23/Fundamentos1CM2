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
    
    int j= 0;
    
    for(i;i<cant;i++){
        for(j;j<cant;j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            
            }
        }
    }
      printf("\n Valores en forma ascendente: \n");
    
    for(i;i<cant;i++){
        printf("&d \n", array[i+1]);
    }
    
    return (EXIT_SUCCESS);
}

