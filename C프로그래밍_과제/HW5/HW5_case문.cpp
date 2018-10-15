#include <stdio.h>
/*5. 메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (사용자 입력)orange

--------------
Your choice is “orange”.*/

int main(void)
{
	int num;
	printf("choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");
	printf("enter your choice here:");
	scanf("%d", &num);

	switch(num){
	case 1:
		printf("\n--------------\n");
		printf("Your choice is : apple\n");
		break;
	case 2:
		printf("\n--------------\n");
		printf("Your choice is : orange\n");
		break;
	case 3: 
		printf("\n--------------\n");
		printf("Your choice is : banana\n");
		break;
	default:
		printf("다시 입력하시오");
	}
	return 0;
}
// 스트링이나 그런걸 안배워서 case문에서 숫자 입력하면 과일 이름이 나오게 했습니다.