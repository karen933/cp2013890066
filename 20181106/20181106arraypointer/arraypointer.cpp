#include <stdio.h>
//printArray
//�Է�:�迭
//���:����
//�μ�ȿ��:ȭ�鿡 �迭�� ���� ���
void printArray(int arr[], int len)
{
	for(int index=0;index<len;index++){
		printf("array[%d]=%d\n", index, arr[index]);
	}
}
	int main(){
		int a[3]={10,20,30}; //�迭�� ����: �迭�̸�:a, �迭�� ����:3
		int* ptr;
		//�迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ��� �ȴ�.
		ptr=a; //ptr = &a[0];
		printf("a[0]=%d\n",*ptr ); //=a[0]
		printf("a[0]=%d\n",a[0] );
		printf("a[0]=%d\n",ptr[0] ); // �����ͺ��� �̸��� �迭 �̸����� ����� �� �ִ�. ���� ȣȯ�� ��
		printf("a[1]=%d\n",ptr[1] );

		//printArray(a,3);

		return 0;
	}