#include <stdio.h>
/*5. �޴��� ����ϰ�, ����ڷκ��� �Է��� �޾� ���õ� �޴��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	choose one of the following.
	apple
	orange
	banana
	peach

	enter your choice here : (����� �Է�)orange

	--------------
	Your choice is ��orange��. */
int main(void)
{ 
	char array[50];

	printf(" choose one of the following. \n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");
	printf("enter your choice here :");
	scanf("%s" , &array);
	printf("Your choice is [ %s ]\n" , &array);


	 return 0;
}
