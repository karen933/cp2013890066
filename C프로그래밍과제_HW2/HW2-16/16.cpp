#include <stdio.h>
#include <stdlib.h>

void main()
{
 char str[10];
 int i , lenth = 0;
  
    printf("���� �Է��Ͻÿ� : ");
 gets(str);


 for(i=0; i<str[i]; i++)
 {
  lenth = lenth + 1;
 }

     printf("�Էµ� ���� : ");
  puts(str);

 printf("�Էµ� ���� �ڸ����� ������ : %d\n" , lenth);

}

