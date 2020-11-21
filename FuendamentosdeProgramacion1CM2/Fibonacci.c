#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n= 20;
    int x= 0;
    int p= 0;
    int u= 1;
    int a= 1;
    
    printf ("0, ");
    while (a<n) {
        p= u;
        u= x;
        x= p+u;
        a= a+1;
       
        
        printf ("%d ",x);
    }
    
    return (0);
}

