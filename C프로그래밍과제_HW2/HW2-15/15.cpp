#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int num;
  int temp;
  int Cnt=0;

  srand((unsigned)time(NULL));

  temp = rand()%99+1;

  printf("정답은 : %d\n" , temp);

     for(int i=0; i<10; i++)
  {
      printf("숫자를 입력하십시오 : \n");
      scanf("%d" , &num);
   
      if(temp > num)
   {
          printf("입력하신 숫자 보다 큽니다.\n");
   }

      else if(temp < num)
   {
          printf("입력하신 숫자 보다 작습니다.\n");
   }

      else if(temp == num)
   {
         printf("정답입니다!");
         break;
   }
   
  }
      
}