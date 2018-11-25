#include <stdio.h>
// ���ͳݿ� �ִ� ���
/*void selectionSort(int *list, const int n)
{
	int i, j, indexMin, temp;

	for (i = 0; i < n - 1; i++)
	{
		indexMin = i;
		for (j = i + 1; j < n; j++)
		{
			if (list[j] < list[indexMin])
			{
				indexMin = j;
			}
		}
		temp = list[indexMin];
		list[indexMin] = list[i];
		list[i] = temp;
	}
}*/

//�ݺ���
void printArray(int* arr , int len){}
//�Լ� findMinIndex()
//�Է�:�迭(�迭�̸�, �迭����)
//���: �ּҰ��� �ε���
//�μ�ȿ��: X
 int findMinIndex(int* arr, int length){
	 int minIndex=0;
	 for(int count=1; count<length;count++){
		 if(arr[minIndex]>arr[count])
			 minIndex=count;
	 }
	 return minIndex;
 }
 //�Լ�: swapElements
 //�Է�: �迭, �ΰ��� �ε���
 //���: x
 //�μ�ȿ��: �迭�� �� �ε��� ��Ұ� �ٲ�
 void swapElements(int* arr, int i, int j){
	 int temp;
	 temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
 }
 //�Լ�: selectionSort()
 //�Է�: �迭
 //���:����
 //�μ�ȿ��: �迭�� ���ĵ�

#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}

 void selectionSort(int* arr, int length)
 {
	 int min;
	 for(int i=0; i<length-1; i++)
	 {
		 min = i;
		 for(int j=i+1; j<length; j++)
		 {
			 if(arr[j]<arr[min])
				 min = j;
			 SWAP(arr[i], arr[min);
		 }
	 }
 }

 //�Լ�: findMin()
 //�Է�:�迭(�迭�̸�, �迭����)
 //���: �迭�ּҰ�
 int findMin(int*arr, int length)
 {
	 int min=arr[0];
	 for(int count=1;count<length;count++)
	 {
		 if(min>arr[count])
			 min=arr[count];
	 }
	 return min;
 }

int main(){
	int a[5]={30,35,27,15,40};
	printf("minimum value of the array is %d\n",findMin(a,5));
	printf("the index of minimum value is %d\n",findMinIndex(a,5));
	swapElements(a,0,3);
	printArray(a,5);
	return 0;
}
