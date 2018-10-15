#include <stdio.h>
int main(void)
{
	char num;
	printf("choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");
	printf("enter your choice here:");
	scanf("%s", &num);

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