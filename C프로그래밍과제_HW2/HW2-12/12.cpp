#include <stdio.h>
//12. for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.

int main(void)
{
	int temp = 0;
	int num;
	int count = 0;

	while(1)
	{
		printf("원하는 정수를 입력하시오\n");
		scanf("%d" , &num);

		if(num==0) break;
		if(count == 0) 
		{
			temp = num;
		}
		else if( num > temp)
		{
			temp = num;
		}
		count++;
	}
	printf("최대값은 : %d\n" , temp);

return 0;
}
