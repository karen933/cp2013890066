#include <stdio.h>

void main()
{
	int n, i;
	printf("수를 입력하시오:");
	scanf("%d",&n);

	
		for(i=1; i<=9; i++)
		{
			printf("%d*%d=%d\n",n,i,n*i);
		}

		printf("\n");
	
}
// 1. 목적 
// 2. 요약(절차적 요약화, 선언적 요약화-구조체)