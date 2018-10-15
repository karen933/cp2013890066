#include <stdio.h>

int main(void)
{
	//1. 두 수(정수)를 입력받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.
	
	int num1, num2;
	printf("정수 입력:");
	 scanf_s("%d", &num1);
	 scanf_s("%d", &num2);
	 if (num1 < num2)
	num1 = num2;
	 printf("더 큰 수는 %d 이다\n", num1); 



	 return 0;
}