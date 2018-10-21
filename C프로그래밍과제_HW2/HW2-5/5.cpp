#include <stdio.h>
//5. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(do-while문 사용)
int main(void)
{
	int x=1, sum=0;

	do
	{
		if(x%3==0)
		sum = sum +x;
		x++;
	}
	while(x<=100);

	printf("총합은 %d\n", sum);
	return 0;
}

