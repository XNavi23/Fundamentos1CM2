#include <stdio.h>
#include <stdlib.h>
#include "-FuncionesH.h"

int main(int argc, char** argv) {
    int a = 3, b = 2, c;
    float area;
    char inicial;
    
    c=suma(a,b);
    printf("c: %d\n",c);
    
    c=resta(a,b);
    printf("c: %d\n",c);
    
    area=area_circulo(2);
    printf("área: %f\n",area);
    
    inicial=primer_caracter("chelin");
    printf("Primer caracter: %c",inicial);
    
    return (0);
}

