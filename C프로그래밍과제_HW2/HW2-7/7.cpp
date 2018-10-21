#include <stdio.h>
//7. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

int main(void)
{
	int i,sum=0;
	printf("입력:");
	scanf("%d", &i);

	while(i!=0)
	{
		printf("%d+%d=", sum, i);
		sum=sum+i;
		printf("%d\n",sum);
		printf("더하고자 하는 정수:");
		scanf("%d", &sum);
		
	}
	printf("%d",sum);
	return 0;
}