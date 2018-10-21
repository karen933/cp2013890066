#include <stdio.h>
//9. 위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니, 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.(입력의 유효성 검사)

int main(void)
{
	int dan,i,result;
	
	while(1)
	{
	printf("출력하고 싶은 구구단의 단 수를 입력하시오(2~9):");
	scanf("%d", &dan);
	if(dan>=2 && dan<10)
		break;
		printf("잘못 입력하였습니다.");
	}
	
	for(i=1; i<=9; i++)
	{
		result=dan*i;
		printf("%d x %d = %d\n", dan, i, result);
	}

	return 0;
}
