#include <stdio.h>
//month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오. (switch문 사용) //1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.

int main(void)
{
	 int month;
 int day;
 int total;

 do
 {
     printf("month 를 입력하시오 :\n");
     scanf("%d" , &month);

  if(month == 2)
  {
      if(day >= 1 && day <=28)
   {
          printf("day 를 입력하시오 :\n");
             scanf("%d" , &day);
   }
  }
  else
   printf("day 를 입력하시오 :\n");
         scanf("%d" , &day);
   break;
  

 }while(month>=1 && month<13 && day >=1 && day < 32);

 switch(1)
 {
 case 1:
  if(month == 1)
  {
     total = day;
     break;
  }
 case 2:
  if(month == 2)
  {
   total = 31 + day;
   break;
  }
 case 3:
  if(month == 3)
  {
   total = 59 + day;
   break;
  }
 
 case 4:
  if(month == 4)
  {
     total = 90 + day;
     break;
  }
 case 5:
  if(month == 5)
  {
   total = 120 + day;
   break;
  }
 case 6:
  if(month == 6)
  {
   total = 151 + day;
   break;
  }
 
    case 7:
  if(month == 7)
  {
     total = 181 + day;
     break;
  }
 case 8:
  if(month == 8)
  {
   total = 212 + day;
   break;
  }
 case 9:
  if(month == 9)
  {
   total =  243 + day;
   break;
  }
 case 10:
  if(month == 10)
  {
     total = 274 + day;
     break;
  }
 case 11:
  if(month == 11)
  {
   total = 304 + day;
   break;
  }
 case 12:
  if(month == 12)
  {
   total = 334 + day;
   break;
  }
 }
 

 printf("%d일 입니다 \n" , total);

	return 0;
}
