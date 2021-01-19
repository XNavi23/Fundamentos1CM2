#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Raíz de 900 = %f\n", sqrt(900.0));
    printf("Exponencial de 3 = %f\n",exp(3.0));
    printf("Logaritmo natural de 3.1416 = %f\n", log(3.1416));
    printf("Logaritmo en base 10 = %f\n",log10(1.0));
    printf("Valor absoluto de -3 = %f \n",fabs(-3));
    printf("Redondeo al mayor de 8.2 = %f\n",ceil(8.2));
    printf("Redondeo al menor de 8.2 = %f\n", floor(8.2));
    printf("Potencia de 3^2 = %f y 2^3 = %f\n", pow(3,2),pow(2,3));
    printf("Residuo de 5/7 = %f\n",fmod(7.0,5.0));
    printf("Seno trigonometrico de 0 = %f\n",sin(0));
    printf("Coseno trigonometrico de 0 = %f\n",cos(0));
    printf("Tangente trigonometrica de 0 = %f\n",tan(0));
    
    return (0);
}

