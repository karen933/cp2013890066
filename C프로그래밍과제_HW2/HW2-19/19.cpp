#include <stdio.h>
#include <stdlib.h>

void main()
{
 int num;

 for(int i=0; i<10; i++)
 {
     printf("���� �Է��Ͻʽÿ� : ");
     scanf("%d" , &num);

     if(num==0 || num==1)
  {
   printf("�Ҽ��� �ƴմϴ�\n");
  
  }

  else if(num%2==0)
  {
   printf("�Ҽ��� �ƴմϴ�\n");
  
  }
  else 
   printf("�Է��� %d �� �Ҽ��� �½��ϴ�\n" , num);
      exit(1);
 }
}