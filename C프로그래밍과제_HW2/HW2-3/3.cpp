#include <stdio.h>
//3. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(while문 사용)
int main(void)
{
	int i=1, sum=0;

	while(i<=100)
	{
		if(i%3==0)
			sum=sum+i;
		i=i+1;
	}
	printf("총합=%d\n", sum);
	return 0;
}
