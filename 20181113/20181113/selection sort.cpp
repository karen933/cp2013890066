#include <stdio.h>
// 인터넷에 있는 방법
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

//반복문
void printArray(int* arr , int len){}
//함수 findMinIndex()
//입력:배열(배열이름, 배열길이)
//출력: 최소값의 인덱스
//부수효과: X
 int findMinIndex(int* arr, int length){
	 int minIndex=0;
	 for(int count=1; count<length;count++){
		 if(arr[minIndex]>arr[count])
			 minIndex=count;
	 }
	 return minIndex;
 }
 //함수: swapElements
 //입력: 배열, 두개의 인덱스
 //출력: x
 //부수효과: 배열의 두 인덱스 요소가 바뀜
 void swapElements(int* arr, int i, int j){
	 int temp;
	 temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
 }
 //함수: selectionSort()
 //입력: 배열
 //출력:없음
 //부수효과: 배열이 정렬됨

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

 //함수: findMin()
 //입력:배열(배열이름, 배열길이)
 //출력: 배열최소값
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
