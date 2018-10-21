#include <stdio.h>

void main()
{
 int i , sum= 0;

 for(i=0; i<100; i++)
 {
  sum = sum + i;
 }
 printf("1부터 ~ 100까지 합은 : %d" , sum);
}