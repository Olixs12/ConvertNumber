#include <stdio.h>
#define CHAR_BITS 5
 void  Convertidor(int numero);

int main()
{
  
  float x;
  int ent;
 
  printf("Enter the number you want to convert: ");
  scanf("%f", &x);
  if(x<=2097151 ){
  
  if(x>0)
  {
printf("SIGN BIT\n");
  printf("0\n");//Positivo
  printf("The number is positive\n");
  ent=x;
  Convertidor(ent);
  }
  else
  {
      if(x>=-2097151)
      {
          printf("SIGN BIT\n");
  printf("1\n");//Negativo
  printf("The number is negative\n");
  ent=x*-1;
  Convertidor(ent);
      }
      else
      {
           printf("Number not allowed. Too small to convert ");
      }
  }}
  else{
      printf("Number not allowed. Too big to convert ");
  }
  return 0;
}

 void  Convertidor(int numero)
    {
      int sup = CHAR_BITS*sizeof(int);
      printf("You number is: ");
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
   
 