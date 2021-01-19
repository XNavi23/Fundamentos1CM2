#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a = 50;
    int b = 60;
    int c = 70;
    int d = 80;
    
    if (a>b && a>c && a>d)
        printf ("%d es mayor\n", a);
    else if(b>a && b>c && b>d){
        
            printf ("%d es mayor\n",b);
        }
    
    else if (c>a && c>b && c>d){
                printf ("%d es mayor\n",c);
    }
    else if (d>a && d>b && d>c){
                printf ("%d es mayor\n", d);
    }
                
    
    return (0);

}
