#include <stdio.h>

/*A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).*/
int main(){
    int a=1,b=0,Contador,iCont;
    printf("qual termo a ser gerado em fibonacci\n");
    scanf("%d",&Contador);
    iCont=1;
    while(iCont <= Contador){
        a=a+b;
        b=a-b;
        iCont++;
       

    }
    printf("%d ",a);
    getchar();
    getchar();
}

