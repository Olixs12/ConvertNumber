#include <stdio.h>

#define CHAR_BITS 5

 void  Convertidor(int numero);

int main()
{
  
  float x;
  int ent;
  //////Introducir numero menores a 2,097,151 sin decimal 
  printf("Introduce el numero que desee convertir: ");
  scanf("%f", &x);
  printf("BIT DE SIGNO\n");
  if(x>0)
  {

  printf("0\n");//Positivo
  printf("El numero es positivo\n");
  ent=x;
  Convertidor(ent);
  }
  else
  {
  printf("1\n");//Negativo
  printf("El numero es negativo\n");
  ent=x*-1;
  Convertidor(ent);
  }
  sleep(3);
  return 0;
}

 void  Convertidor(int numero)
    {
      int sup = CHAR_BITS*sizeof(int);
    while(sup >= 0)
    {
        if(numero & (((long int)1) << sup))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        sup--;
    }
    printf("\n");
    }
   
 