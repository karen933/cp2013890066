#include <stdio.h>
//9. ���� �������� 1���� 9���� �̿��� ���ڸ� ����ڰ� �߸� �Է��� ���� ������, �� ��쿡 �߸��� ���ڶ�� ���� �˷��ִ� ���� �޽����� ����ϰ� �ٽ� ���ڸ� �Է� �޵��� ó���Ͻÿ�.(�Է��� ��ȿ�� �˻�)

int main(void)
{
	int dan,i,result;
	
	while(1)
	{
	printf("����ϰ� ���� �������� �� ���� �Է��Ͻÿ�(2~9):");
	scanf("%d", &dan);
	if(dan>=2 && dan<10)
		break;
		printf("�߸� �Է��Ͽ����ϴ�.");
	}
	
	for(i=1; i<=9; i++)
	{
		result=dan*i;
		printf("%d x %d = %d\n", dan, i, result);
	}

	return 0;
}
