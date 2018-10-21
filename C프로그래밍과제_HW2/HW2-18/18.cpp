#include <stdio.h>

void main()
{
 int i , sum= 0;
 int num;

 
 for(i=0; i<101; i++)
 {
     if(i%5 == 0)
  {
   sum = sum + i;
      printf("%3d\n" , i);
  }

 }
 printf("\n\n");
 printf("1부터 ~ 100까지 5배수 합은 : %d\n" , sum);
}