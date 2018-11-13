#include <stdio.h>
//printArray
//입력:배열
//출력:없음
//부수효과:화면에 배열의 값을 출력
//void printArray(int arr[], int len){
void printArray(int*arr, int len){ //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.(포인터변수가 넘어오는 형식으로)
	for(int index=0;index<len;index++){
		printf("array[%d]=%d\n", index, arr[index]);
	}
}
	int main(){
		int a[3]={10,20,30}; //배열의 선언: 배열이름:a, 배열의 길이:3
		int* ptr;
		//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
		ptr=a; //ptr = &a[0];

		printArray(a,3);





		printf("a[0]=%d\n",*ptr ); //=a[0]
		/*printf("a[0]=%d\n",a[0] );
		printf("a[0]=%d\n",ptr[0] ); // 포인터변수 이름을 배열 이름으로 사용할 수 있다. 서로 호환이 됨 
		printf("a[1]=%d\n",ptr[1] );
		*/
		//a=ptr[1]; //error Why? ->배열의 이름(a)은 값만 가지고 있음. 즉 rvalue이다.
		//10=a[2]; //위와 같은 이유 10이라는 literal은 값만 가지고 있는 것 저장장소가 아니라
		//printArray(a,3);

		return 0;
	}
