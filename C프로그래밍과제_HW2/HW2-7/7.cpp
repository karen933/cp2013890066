#include <stdio.h>
//7. 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

int main(void)
{
	int i,sum=0;
	printf("�Է�:");
	scanf("%d", &i);

	while(i!=0)
	{
		printf("%d+%d=", sum, i);
		sum=sum+i;
		printf("%d\n",sum);
		printf("���ϰ��� �ϴ� ����:");
		scanf("%d", &sum);
		
	}
	printf("%d",sum);
	return 0;
}