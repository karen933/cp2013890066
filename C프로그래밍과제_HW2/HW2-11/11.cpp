#include <stdio.h>
//11. 위의 문제를 0을 입력하기 전까지는 계속 수행(인수 출력)하도록 수정하시오.

int main(void)
{
	int i;
	int num;

	printf("정수 입력 ? ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		if(num%i==0)
			printf("%d", i);
		if(i==0)
			break;
	}
	printf("\n");
	return 0;
}
