#include <stdio.h>
//6. � ���� ����(n)�� �Է� �޾�(���� 0�̳� ���� ������ �Է��ϸ�, ���� �޽����� ��� ��, �ٽ� �Է��ϵ��� ó��), �� ���� 2n�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void)
{
	int num, total;

	while(1)
	{
		printf("���� ������ �Է�:");
		scanf("%d", &num);

		if(num!=0 && num>0)
		{
			total=num*2;
			printf("%d\n", total);
			break;
		}
		else
			printf("Error!\n");
	}
	return 0;
}