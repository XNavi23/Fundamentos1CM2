#include <stdio.h>
#include <stdlib.h>
#include "-FuncionesH.h"

float PI=3.141592;

int suma(int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}
char primer_caracter(char* cadena){
    return cadena[0];
}
double area_circulo(int radio){
    return PI*radio*radio;
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

