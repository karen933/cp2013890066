#include <stdio.h>

void main()
{
 int num;
 int hap = 0;
 int final = 0;

 for( ; ; )
 {
    printf("���� �Է��Ͻÿ� :");
    scanf("%d" , &num);

    hap =  hap + num;

    if(num >= 7)
    {
     final = hap;
     break;
    }
    else 
     printf("���ǿ� �մ����� �ʽ��ϴ� �ٽ� �Է��Ͻʽÿ�\n");
   }
 printf("%d" , final);
}
 

