#include <stdio.h>
/*4. 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.
    (A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)*/
int main(void)
{
	 int score;
    printf("점수 입력(0~100):");
    scanf_s("%d", &score);
    if ((score > 100) || (score < 0))
    {
        printf("NA\n");
    }
    else if (score >= 80)
    {
        printf("A\n");
    }
    else if (score >= 60)
    {
        printf("B\n");
    }
    else if (score >= 40)
    {
        printf("C\n");
    }
    else if (score >= 20)
    {
        printf("D\n");
    }
    else 
    {
        printf("F\n");
    }     


	return 0;
}
