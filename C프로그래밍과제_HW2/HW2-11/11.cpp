#include <stdio.h>
//11. ���� ������ 0�� �Է��ϱ� �������� ��� ����(�μ� ���)�ϵ��� �����Ͻÿ�.

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
		if(i==0)
			break;
	}
	printf("\n");
	return 0;
}
