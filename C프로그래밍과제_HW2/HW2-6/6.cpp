#include <stdio.h>
//6. 어떤 양의 정수(n)를 입력 받아(만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 그 수의 2n을 구하는 프로그램을 작성하시오.
int main(void)
{
	int num, total;

	while(1)
	{
		printf("양의 정수를 입력:");
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