#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float ht,vh,pd,sb,td,sl;
    
    printf("Quantas horas trabalhou?");
    scanf("%f", &ht);
    
    printf("Valor á hora?");
    scanf("%f", &vh);
    
    printf("Valor a desconto?");
    scanf("%f", &pd);
    
    sb=ht*vh;
    td=(pd/100)*sb;
    sl=sb-td;
    
    printf("Horas de Trabalho:%fH\n",ht),
    printf("Salário Bruto:%f€\n",sb);
    printf("Desconto:%f%\n",td);
    printf("Salário Líquido:%f€\n",sl);
    
    exit(0);
}




