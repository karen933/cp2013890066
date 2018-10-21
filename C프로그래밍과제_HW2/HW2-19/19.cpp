#include <stdio.h>
#include <stdlib.h>

void main()
{
 int num;

 for(int i=0; i<10; i++)
 {
     printf("수를 입력하십시오 : ");
     scanf("%d" , &num);

     if(num==0 || num==1)
  {
   printf("소수가 아닙니다\n");
  
  }

  else if(num%2==0)
  {
   printf("소수가 아닙니다\n");
  
  }
  else 
   printf("입력한 %d 은 소수가 맞습니다\n" , num);
      exit(1);
 }
}