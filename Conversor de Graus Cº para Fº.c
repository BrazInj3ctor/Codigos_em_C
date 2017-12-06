/******************************************************************************
OBS:
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float C,F;
    
    printf("Introduza uma temperatura em graus Celcius:\n");
    
    scanf("%f", &C);
    
    F=(9*C+160)/5;
    printf("%f em Celcius -> %f Farenheits", C, F);

exit (0);
}



