#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int t;
    int j;
    
    for (t=1;t<=10;t++){
        for(j=1;j<=10;j++){
            printf("%d X %d=%d\n",t,j,t*j);
            
        }
        printf("--------\n");
    }
    
    return (0);
}

