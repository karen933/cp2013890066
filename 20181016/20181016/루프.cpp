#include<stdio.h>

//2018.10.16 ���� - �ݺ���

int main(void)
{

	/* crtrl-[: matching parenthess(��ȣ)
	ctrl-k, ctrl-f : Format, �ҽ��ڵ� ���ÿ����� �������� �����Ѵ� 
	crtl-k, ctrl-c : ������ ������ Comment out 
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

	//1���� 100���� 3�� ����� ȭ�鿡 ���
	/*int count=1;
	while (count<=100){
	if(count%3==0)
	printf("count =%d \n", count);
	count++;
	}
	printf("���α׷� ����\n");*/

	////1���� 100���� 3�� ����� ������ ������ ���
	//int count=1;
	//while (count<=100){
	//	if(count%3!=0)
	//		printf("count =%d \n", count);
	//	count++;
	//}
	//printf("���α׷� ����\n");

	//�б⹮

	//Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�

	/*int input;
	while(1){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		if(input==100)
			break;
		if(input%3==0)
			printf("�Է��� ���� %d�� 3�� ����̴�.\n",input);
		else
			printf("�Է��� ���� %d�� 3�� ����� �ƴϴ�.\n", input);


	}
	printf("����\n");*/

	/*int input;
	while(1){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		if(input==100)
			break;
		if(input>=1000){
			printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է��ϼ���\n");
			continue;
		}
		if(input%3==0)
			printf("�Է��� ���� %d�� 3�� ����̴�.\n",input);
		else
			printf("�Է��� ���� %d�� 3�� ����� �ƴϴ�.\n", input);


	}*/


	// 1���� 100������ ������ ���� ���Ͻÿ�
	int sum = 0;
	int i=1;
	while(i<=100){
		/*sum=sum+i;
		i++;*/
		//sum=sum+i++;
		sum+=i++;
	}
	printf("the sum is %d\n", sum);



	printf("����\n");










	return 0;

}