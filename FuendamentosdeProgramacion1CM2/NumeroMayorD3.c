#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a= 20;
    int b= 10;
    int c= 30;
    
    if(a>b && a>c)
        printf("%d es el mayor", a);
    else if(b>a && b>c)
        printf("%d es el mayor", b);
    else if(c>a && c>b)
        printf("%d es el mayor", c);
    return (0);
}

