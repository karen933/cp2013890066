#include <stdio.h>
//12. for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
	int temp = 0;
	int num;
	int count = 0;

	while(1)
	{
		printf("���ϴ� ������ �Է��Ͻÿ�\n");
		scanf("%d" , &num);

		if(num==0) break;
		if(count == 0) 
		{
			temp = num;
		}
		else if( num > temp)
		{
			temp = num;
		}
		count++;
	}
	printf("�ִ밪�� : %d\n" , temp);

return 0;
}
