//�����迭�� ���� ��ȯ�ϴ� �Լ�
#include<stdio.h>
//�Լ��̸� addArray()
//�Է�: �迭
//���: �迭 �� ��ҵ��� ��
//�μ�ȿ��: ����

int addArray(int arr[], int length)
{
	int sum=0, index=0;
	while(index<length)
	{
		sum+=arr[index++];
		return sum;
	}
}

int main(){
	int arr[4]={10,20,30,40};
	int length = 4;
	printf("%d\n", addArray(arr,40));
	return 0;
}