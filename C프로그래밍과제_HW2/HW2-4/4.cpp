#include <stdio.h>
//4. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(for�� ���)
int main(void)
{
	int x, sum=0;

	for(x=1;x<=100;x++)
	{
		if (x%3==0)
			sum = sum + x;
	}
	printf("������ %d\n", sum);
	return 0;
}
