#include <stdio.h>
int main(){
//이 위는 당분간 무시하도록

	//변수선언문 (자료형 변수이름;) : 1. 변수의 이름 소개  /  2. 변수의 자료형 지정
	//int ->자료형, a -> 변수이름 
	// -2^16<= a<= 2^16-1 사이의 정수
	// 변수: 메모리 저장장소의 이름
	//자료형: 변수가 가질 수 있는 값의 범위를 지정
	//C언어에서는 변수를 사용하기전에 반드시 변수를 선언해야 한다.
	//문장: ;으로 끝난다
	int a; //변수선언문: 1. a는 변수의 이름이다. 2.변수 a의 자료형은 int이다.
	float ff; //소수점 숫자(실수) 표현

	//대입문: 우변의 "값"을 좌변의 저장장소로 이동(저장)한다.
	//리터럴(literal):소스코드에서 특정한 자료형의 값을 직접 표현하는 방법 
	// 예) 정수형: 10, 0xF3; 실수형: 3.14, 10f; 0.1E-5; 문자형: 'a', \n; 문자열: "Hello world"
	a = 10; 

	int b =20, c; // 변수선언 + 변수초기화

	//================================================================================================================================
	//수식(expression): 연산자와 피연산자들의 조합. 
	//모든 수식은 값을 반환(리턴)한다.
	c= a+b;//=대입연산자    =,+:연산자

	//대입연산자
	a = b = c =100; //똑같은 연산자가 나올 때 대입연산자는 우에서 좌로 수행 c=100 b=100 a=100이 순서

	//증감연산자
	a = b ++; //b++: 반환값=>b, 부수효과=>b=b+1 
	b=10;
	a= ++b; //++b: 반환값==>b+1, 부수효과=>b=b+1 
	//a->10, b->11


	//관계연산자: < > <= >= == !=
	a=10; b=20;
	c= a <b; //연산결과 참 c->1
	c= a> b; //연산결과 거짓 c->0

	//논리연산자: && || ! and or not
	//C언어에서 논리연산자의 피연산자가 0이면 거짓, 0이 아니면 참으로 처리한다. 중요함 java랑 다름
	a= 1 && 0; //a->0
	a= 1 || 0; //a->1
	a= 100 || 0; // a->1

	//연산자 우선순위(operator precedence)
	a = 10 + 20 * 3;
	a = (1 || ((3*4)>10));

	//연산자 결합방향(Associativity)
	a = 10 + 20 + 30; //L->R

	//조건문(Conditiona lStatement)
	a = 10;
	//조건문 시작
	if (a == 10){
		printf("a is ten\n");
		printf("hahahah\n");
	} //여러개의 문장을 하나의 문장으로 처리하는 복합문 - {}사용
	else {
		printf("a is not a ten\n");
	} // 한 문장이라 {} 굳이 없어도 됨
	//조건문 끝

	///printf("program end\n"); // 이 문장은 조건문 내의 무엇과도 관계없이 무조건 수행됨

	///=========================================================================================================================
	//조건문(Conditional Statement)
	a = 10;
	//조건문 시작
	if (a == 10){
		printf("a is ten\n");
		printf("hahahah\n");
	} //여러개의 문장을 하나의 문장으로 처리하는 복합문 - {}사용
	else if (a==20) 
		printf("a is not twenty\n");
	else
		printf("a is not twenty\n");

	//키보드에서 입력받는 방법
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	printf("입력받은 a  =%d\n",a);

	printf("progran is end");

	

	//printf("a = %d\n", a); // %d 오른쪽에 있는 변수를 %d가 있는 자리에 10진수로 표기함

	//=================================================================================================================




















	
	// 이 아래도 당분간 무시하도록
	return 0;
}
