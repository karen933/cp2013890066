#include <stdio.h>

void main()
{
 int i , j;
 int num;

 printf("������ �Է��ϼ��� :");
 scanf("%d" , &num);

 for(i=2; i<=num; i++)
 {
  for(j=2; j<=i; j++)
  {
      if(i==j)
   {
    printf("%d\n" , i);
   }
   else if(i%j==0)
   {
    break;
   }
  }
 }
}