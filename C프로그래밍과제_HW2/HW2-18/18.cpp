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
 printf("1���� ~ 100���� 5��� ���� : %d\n" , sum);
}