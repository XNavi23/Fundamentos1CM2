#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x = 0;
    int n;
    
        
    printf("Ingrese el valor de n: ");
    scanf("%d",&n);
    
    int arreglo[n];
   
    for(x; x<=n; x++){
        printf("Ingrese el nuevo valor: ");
        scanf("%d",x);
        arreglo[n]={x};
        
    }
    
    return (0);
}

