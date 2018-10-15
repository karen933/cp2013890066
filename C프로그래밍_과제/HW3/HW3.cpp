#include <stdio.h>
//3. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.
int main(void)
{
	 int a,b,c;
	 printf("세 개의 정수 중 가장 큰 수를 출력:");
	 scanf_s("%d %d %d", &a,&b,&c);

	 if (a>b&&a>c)
	 {
		 printf("가장 큰 수는 %d이다\n", a);
	 }
	 else if (b>c)
	 {
		 printf("가장 큰 수는 %d이다\n", b);
	 }
	 else
	 {
		 printf("가장 큰 수는 %d이다\n", c);
	 }

	 return 0;
}
