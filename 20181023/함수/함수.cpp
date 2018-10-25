#include<stdio.h>

int gVar = 100; //파일 전체에서 gVar(전역변수 glabal variable)에 접근 가능
				//사용은 하지말것

//함수 sum()
//입력: 두 정수
//출력: 두 정수의 합
//부수효과: 없음

int sum(int a, int b) //함수선언   //sum은 함수의 이름(sum) //(int a, int b)=매개변수의 개수(2개)//각 매개변수의 자료형(int,int)//반환값의 자료형(int)-반환형
{                                  //위 4개는 함수를 호출하기 위해 필요한 정보
	int c;			//함수본체
	c=a+b+gVar;			//함수본체
	return c;		//함수본체		//모든 식별자는 변수의 유효범위가 있고 그 범위는 변수가 선언된 함수의 내부이다
} ///여기까지 함수정의

//함수: goodPrint()
//입력: 없음
//출력: 없음
//부수효과: 화면에 good 출력
void goodPrint(){
		printf("good\n");
}



int main(void)
{
	int x=10,y=20,z;
	z=sum(x,y); //함수호출
	printf("z=%d\n",z);
	 goodPrint();
		

	return 0;
}