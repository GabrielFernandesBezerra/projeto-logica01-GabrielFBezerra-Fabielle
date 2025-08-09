#include <stdio.h>

int main (void){
    double preco; 
    float desconto;
    float imposto;

    printf ("Digite o Preço: ");
    scanf ("%lf",&preco); //momento que a informação do valor do preço foi absorvida pelo programa

    printf ("Digite o Desconto: ");
    scanf ("%f",&desconto); //momento que a informação do valor do deconto foi absorvida pelo programa
    
    printf ("Digite o Imposto: ");
    scanf ("%f", &imposto); //momento que a informação do valor do imposto foi absorvida pelo programa

    //calculos
    desconto = desconto/100; //momento que o valor do desconto vira decimal
    imposto = imposto/100; //momento que o valor do imposto vira decimal
    desconto = desconto*preco; //valor do desconto
    double preco_final = preco-desconto; //momento  que o preço com desconto é definido
    imposto = preco_final*imposto; //momento que o preço com desconto tem o imposto aplicado sobre ele
    preco_final = preco_final+imposto; //momento  que o preço final é definido

   printf ("O Preço Final é: %.2lf \n",preco_final);
}
