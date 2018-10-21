#include <stdio.h>
#include <stdlib.h>

void main()
{
 char str[10];
 int i , lenth = 0;
  
    printf("수를 입력하시오 : ");
 gets(str);


 for(i=0; i<str[i]; i++)
 {
  lenth = lenth + 1;
 }

     printf("입력된 수는 : ");
  puts(str);

 printf("입력된 수의 자리수의 개수는 : %d\n" , lenth);

}

