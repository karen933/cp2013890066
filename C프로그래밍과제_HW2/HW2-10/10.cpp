#include <stdio.h>
/*10. �Ҽ�(prime-number) �˻�� ����ϰ� ����ڰ� �Է��� ���� 
�μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
8 => 2 4 
12 => 2 3 4 6*/

int main(void)
{
	int i;
	int num;

	printf("���� �Է� ? ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		if(num%i==0)
			printf("%d", i);
	}
	printf("\n");
	return 0;
}
