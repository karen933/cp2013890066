#include <stdio.h>
//구조체-구성요소(c에서는 구성요소에 초점)+요소간의 관계
//복소수-실수부+허수부
//struct complex
/*
//구조체선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
struct complex {
	double real; //멤버변수 member varable
	double imag; //상동(ditto) member varable
}; //반드시 세미콜론으로 끝나야한다.

typedef struct complex Complex; //자료형 "struct complex:를 앞으로 "Complex"라고 부르겠다.
*/

//위의 두 문장을 한문장으로 만들 수 있다.
typedef struct complex {
	double real; 
	double imag; 
}Complex; 

//데이터 타입의 별명 선언
typedef int myintType ; //자료형 "int"를 앞으로 'myintType'라고도 부르겠다.

//함수 printComplex()
//입력:복소수
//출력: 없음
//부수효과: 없음
void printComplex(Complex x)
{
	printf("%f + j%f\n", x.real, x.imag);
}

 int main()
 {
	 myintType count=10; //==>int count =0;

	 //구조체 변수선언
	Complex a;//struct complex a; //구조체 변수선언
	a.real=10;//구조체변수의 멤버변수 접근방법 ==> 구조체변수이름.멤버변수이름
	a.imag=20;
	printComplex(a);
	
	return 0;
}

	