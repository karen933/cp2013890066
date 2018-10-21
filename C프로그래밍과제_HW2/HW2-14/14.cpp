#include <stdio.h>

void main()
{
 int num;
 int hap = 0;
 int final = 0;

 for( ; ; )
 {
    printf("수를 입력하시오 :");
    scanf("%d" , &num);

    hap =  hap + num;

    if(num >= 7)
    {
     final = hap;
     break;
    }
    else 
     printf("조건에 합당하지 않습니다 다시 입력하십시오\n");
   }
 printf("%d" , final);
}
 

