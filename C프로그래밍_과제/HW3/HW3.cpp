#include <stdio.h>
//3. �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void)
{
	 int a,b,c;
	 printf("�� ���� ���� �� ���� ū ���� ���:");
	 scanf_s("%d %d %d", &a,&b,&c);

	 if (a>b&&a>c)
	 {
		 printf("���� ū ���� %d�̴�\n", a);
	 }
	 else if (b>c)
	 {
		 printf("���� ū ���� %d�̴�\n", b);
	 }
	 else
	 {
		 printf("���� ū ���� %d�̴�\n", c);
	 }

	 return 0;
}
