#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char operador[1];
//...............................................................

void PedirDados(void);

void PedirOperador(void);

int ReceberBin(void);

int TransformarBinToDec(int bin);

float RealizarOperacao(int decimal1, int decimal2);

int Retransformar(int resultado);


//...............................................................
int main(void)
{
  int bin = 0;
  int dec1 = 0, dec2 = 0;
  int resultado = 0;
//...............................................................
  PedirDados();  
  //ReceberDados();
    scanf("%d", &bin);
      dec1 = TransformarBinToDec(bin);
  PedirOperador();
    scanf("%s", operador);
  PedirDados();
    scanf("%d", &bin);
      dec2 = TransformarBinToDec(bin);
//...............................................................
//printf("Dec1 = %d\nDec2 = %d\nOperador = %s\n", dec1, dec2, operador);
  resultado = RealizarOperacao(dec1, dec2);
  //printf("deu: %d", resultado);
  //printf("O resultado da operação foi: %d", resultado);
  printf("O Resultado da operação foi: ");
  Retransformar(resultado);
  
  return 0;
}

//.....................................................................

void PedirDados(void)
{
    //1- pedir a operação e o cod binario(printf);
  printf("Digite o numero binario:\n");
}

void PedirOperador(void)
{
    //1- pedir a operação e o cod binario(printf);
  printf("Digite o operador:\n");
}
    
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

float RealizarOperacao(int decimal1, int decimal2)
{
  float resultado = 0;
    //4- fazer a operação;
  if(strcmp(operador,"+") == 0)
  {
  //printf("vc escolheu +\n"); 
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
  
  //printf("o resultado foi: %.2f", resultado);
  return(resultado);
}

int Retransformar(int resultado)
{
  int resposta = 0;
  int vet_bin[256];
  int i = 0, j;
  //5- trasnformar de volta em binario;

  while(resultado>0)
    {
      vet_bin[i] = resultado % 2;
      i++;
      resultado = resultado/2;
    }
  for(j = i - 1 ; j >= 0; j--)
    { 
      printf("%d", vet_bin[j]);
     // printf("\n");
    }
  //return(reposta);
  return 0;
}