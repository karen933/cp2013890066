#include <stdio.h>
//8. 1���� 9������ ���� �ϳ��� �Է� �޾� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(5�̸� 5���� ���)
int main(void)
{
	int n = 0, i = 1;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);

	while(i<=9)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;	
	}
	return 0;
}
