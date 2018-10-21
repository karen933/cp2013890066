#include <stdio.h>
//8. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)
int main(void)
{
	int n = 0, i = 1;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &n);

	while(i<=9)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;	
	}
	return 0;
}
