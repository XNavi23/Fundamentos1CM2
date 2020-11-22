#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a = 50;
    int b = 40;
    int c = 50;
    
    if (a>b && a>c)
        printf ("%d es mayor\n", a);
    else if(b>a && b>c){
        
            printf ("%d es mayor\n",b);
        }
    
    else if (c>a && c>b){
                printf ("%d es mayor\n",c);
    }
                
    
    return (0);

}
