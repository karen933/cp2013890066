#include <stdio.h>
//4. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(for문 사용)
int main(void)
{
	int x, sum=0;

	for(x=1;x<=100;x++)
	{
		if (x%3==0)
			sum = sum + x;
	}
	printf("총합은 %d\n", sum);
	return 0;
}
