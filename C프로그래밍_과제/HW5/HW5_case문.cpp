#include <stdio.h>
/*5. �޴��� ����ϰ�, ����ڷκ��� �Է��� �޾� ���õ� �޴��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (����� �Է�)orange

--------------
Your choice is ��orange��.*/

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
		printf("�ٽ� �Է��Ͻÿ�");
	}
	return 0;
}
// ��Ʈ���̳� �׷��� �ȹ���� case������ ���� �Է��ϸ� ���� �̸��� ������ �߽��ϴ�.