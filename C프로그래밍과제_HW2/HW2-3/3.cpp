#include <stdio.h>
//3. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(while�� ���)
int main(void)
{
	int i=1, sum=0;

	while(i<=100)
	{
		if(i%3==0)
			sum=sum+i;
		i=i+1;
	}
	printf("����=%d\n", sum);
	return 0;
}
