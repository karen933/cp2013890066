#include<stdio.h>

//2018.10.16 강의 - 반복문

int main(void)
{

	/* crtrl-[: matching parenthess(괄호)
	ctrl-k, ctrl-f : Format, 소스코드 선택영역을 보기좋게 포맷한다 
	crtl-k, ctrl-c : 선택한 영역을 Comment out 
	ctrl-k, ctrl-u : Undo comment out */

	/*int count=1;
	while (count<=10){
	printf("count = %d \n",count);
	count = count +1;
	}*/

	/*int count=1;
	while (count<=10){
	printf("count = %d \n",count);
	count++ ;
	}*/

	/*int count=1;
	while (count<=10) 
	printf("count = %d \n",count++);*/

	//1부터 100까지 3의 배수만 화면에 출력
	/*int count=1;
	while (count<=100){
	if(count%3==0)
	printf("count =%d \n", count);
	count++;
	}
	printf("프로그램 종료\n");*/

	////1부터 100까지 3의 배수만 제외한 정수를 출력
	//int count=1;
	//while (count<=100){
	//	if(count%3!=0)
	//		printf("count =%d \n", count);
	//	count++;
	//}
	//printf("프로그램 종료\n");

	//분기문

	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다

	/*int input;
	while(1){
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		if(input==100)
			break;
		if(input%3==0)
			printf("입력한 정수 %d는 3의 배수이다.\n",input);
		else
			printf("입력한 정수 %d는 3의 배수가 아니다.\n", input);


	}
	printf("종료\n");*/

	/*int input;
	while(1){
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		if(input==100)
			break;
		if(input>=1000){
			printf("입력한 정수가 1000보다 큽니다. 다시 입력하세요\n");
			continue;
		}
		if(input%3==0)
			printf("입력한 정수 %d는 3의 배수이다.\n",input);
		else
			printf("입력한 정수 %d는 3의 배수가 아니다.\n", input);


	}*/


	// 1에서 100까지의 정수의 합을 구하시오
	int sum = 0;
	int i=1;
	while(i<=100){
		/*sum=sum+i;
		i++;*/
		//sum=sum+i++;
		sum+=i++;
	}
	printf("the sum is %d\n", sum);



	printf("종료\n");










	return 0;

}