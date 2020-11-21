/* * File:   While.c
 * Author: xadia
 *
 * Created on 11 de noviembre de 2020, 04:31 PM */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int t= 1;
    int j= 1;
    while (t<=10){
        int j= 1;
        while (j<=10){
            printf("%d X %d = %d\n",t,j,t*j);
            j= j+1;
        }
        printf("--------\n");
        t= t+1;
        
    }
    
    return (0);
}

