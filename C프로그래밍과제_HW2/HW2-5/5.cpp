#include <stdio.h>
//5. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(do-while�� ���)
int main(void)
{
	int x=1, sum=0;

	do
	{
		if(x%3==0)
		sum = sum +x;
		x++;
	}
	while(x<=100);

	printf("������ %d\n", sum);
	return 0;
}

