#include <stdio.h>
/*10. 소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 
인수들을 모두 출력하는 프로그램을 작성하시오.
8 => 2 4 
12 => 2 3 4 6*/

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
	}
	printf("\n");
	return 0;
}
