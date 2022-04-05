//.....................................................................    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//.....................................................................        
char operador[1];
int TransformarBinToDec(int bin);
float RealizarOperacao(int decimal1, int decimal2);
int Retransformar(int resultado);
//.....................................................................        
int main(void)
{
  int bin = 0;
  int dec1 = 0, dec2 = 0;
  int resultado = 0;
  printf("Digite o caracter do operador(+,-,*,/ ou porcentagem):\n");
  scanf("%s", operador);
  printf("Digite um numero binario de ate 8 bits (entre 0 e 255):\n");
  scanf("%d", &bin);
  dec1 = TransformarBinToDec(bin);
  printf("Digite um segundo numero binario de ate 8 bits (entre 0 e 255):\n");
  scanf("%d", &bin);
  dec2 = TransformarBinToDec(bin);
  resultado = RealizarOperacao(dec1, dec2);
  printf("O resultado da sua operacao foi: ");
  Retransformar(resultado);
  return 0;
}
//.....................................................................        
int TransformarBinToDec(int bin)
{
  int total  = 0;
  int potenc = 1;
  while(bin > 0) 
  {
    total += bin % 10 * potenc;
    bin    = bin / 10;
    potenc = potenc * 2;
  }
  return total;
}
//.....................................................................        
float RealizarOperacao(int decimal1, int decimal2)
{
  float resultado = 0;
  if(strcmp(operador,"+") == 0)
  {
  resultado = decimal1 + decimal2;
  }
  if(strcmp(operador,"*") == 0)
  {
    resultado = decimal1 * decimal2;
  }
  if(strcmp(operador,"/") == 0)
  {
    resultado = decimal1 / decimal2;
  }
  if(strcmp(operador,"-") == 0)
  {
    resultado = decimal1 - decimal2;
  }
  if(strcmp(operador,"%") == 0)
  {
    resultado = decimal1 % decimal2;  
  }
  return(resultado);
}
//.....................................................................        
int Retransformar(int resultado)
{
  int vet_bin[8];
  int i = 0;
  while(i<8)
  {
    vet_bin[i] = resultado % 2;
    resultado = resultado/2;
    i++;
  }
  while (i>0)
  {
    if (vet_bin[i-1] == 1)
    {
     printf("1");
    }
    else
    {
     printf("0");
    }
    i--;
  }
  return 0;
}
//.....................................................................    