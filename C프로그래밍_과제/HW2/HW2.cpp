#include <stdio.h>
//2.�ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void)
{
	int Num;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&Num);

	if(Num == 0)
	{
		printf("0\n");
	}
	else if (Num%2 ==0)
	{
		printf("¦��\n");
	}
	else 
	{
		printf("Ȧ��\n");
	}

	return 0;
}