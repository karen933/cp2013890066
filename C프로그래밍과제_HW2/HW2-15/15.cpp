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

  printf("������ : %d\n" , temp);

     for(int i=0; i<10; i++)
  {
      printf("���ڸ� �Է��Ͻʽÿ� : \n");
      scanf("%d" , &num);
   
      if(temp > num)
   {
          printf("�Է��Ͻ� ���� ���� Ů�ϴ�.\n");
   }

      else if(temp < num)
   {
          printf("�Է��Ͻ� ���� ���� �۽��ϴ�.\n");
   }

      else if(temp == num)
   {
         printf("�����Դϴ�!");
         break;
   }
   
  }
      
}