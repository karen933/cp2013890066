#include <stdio.h>

int main(void)
{
	//1. �� ��(����)�� �Է¹޾�, �� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	int num1, num2;
	printf("���� �Է�:");
	 scanf_s("%d", &num1);
	 scanf_s("%d", &num2);
	 if (num1 < num2)
	num1 = num2;
	 printf("�� ū ���� %d �̴�\n", num1); 



	 return 0;
}