/*Menú de funciones de conversión */
#include <stdio.h>
#include <stdlib.h>

void CaF();
void CaK();
void FaC();
void FaK();
void KaF();
void KaC();
void casoN();

int main(int argc, char** argv) {

    int n = 0;
    do{
        system("cmd /c cls");
        printf("\n¿Qué desea convertir?\n");
        printf("1.- Celsius a Fahrenheit\n");
        printf("2.- Celsius a Kelvin\n");
        printf("3.- Fahrenheit a Celsius\n");
        printf("4.- Fahrenheit a Kelvin\n");
        printf("5.- Kelvin a Fahrenheit\n");
        printf("6.- Kelvin a Celsius\n");
        printf("7.- Salir\n");
        
        scanf("%d",&n);
        
        casoN();
    }
    while(n != 7);
    
    return (0);
}
//Funciones de conversión pa los 6 casos:
void CaF(){
    float c;
    
    printf("Grados a convertir: ");
    scanf("%f",c);
    float f= c*1.8+32;
    printf("°C a F = %f °",f);
    system("cmd /c pause");
}

void CaK(){
    float c;
    float k;
    printf("Grados a convertir: ");
    scanf("%f",c);
    k = c+273.15;
    printf("%f°C a K = %f°",c,k);
    system("cmd /c pause");
}

void FaC(){
    float f;
    float c;
    printf("Grados a convertir: ");
    scanf("%f",f);
    c = (f-32)/1.8;
    printf("%f°F a C = %f°",f,c);
    system("cmd /c pause");
}

void FaK(){
    float f;
    float k;
    printf("Grados a convertir: ");
    scanf("%f",f);
    k = f+255.372;
    printf("%f°F a K = %f°",f,k);
    system("cmd /c pause");
}

void KaF(){
    float f;
    float k;
    printf("Grados a convertir: ");
    scanf("%f",k);
    f = (k-273.15)*(9/5)+32;
    printf("%f°K a F = %f°",k,f);
    system("cmd /c pause");
}

void KaC(){
    float c;
    float k;
    printf("Grados a convertir: ");
    scanf("%f",k);
    c = k-273.15;
    printf("%f°K a C = %f°",k,c);
    system("cmd /c pause");
}

//Función para cada caso u.u
void casoN (int n){
    switch(n){
        case 1:{
            CaF();
            break; 
        }
        case 2: {
           CaK();
            break;
        }
        case 3:{
            FaC();
            break; 
        }
        case 4: {
            FaK();
            break;
        }
        case 5:{
            KaF();
            break; 
        }
        case 6: {
            FaC();
            break;
        }
        case 7  : {
            printf("Salir");
            break;
        }
        default:{
            printf("??\n");
            break;
        }
    }
}