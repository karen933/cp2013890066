#include <stdio.h>
//����ü-�������(c������ ������ҿ� ����)+��Ұ��� ����
//���Ҽ�-�Ǽ���+�����
//struct complex
/*
//����ü����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
struct complex {
	double real; //������� member varable
	double imag; //��(ditto) member varable
}; //�ݵ�� �����ݷ����� �������Ѵ�.

typedef struct complex Complex; //�ڷ��� "struct complex:�� ������ "Complex"��� �θ��ڴ�.
*/

//���� �� ������ �ѹ������� ���� �� �ִ�.
typedef struct complex {
	double real; 
	double imag; 
}Complex; 

//������ Ÿ���� ���� ����
typedef int myintType ; //�ڷ��� "int"�� ������ 'myintType'��� �θ��ڴ�.

//�Լ� printComplex()
//�Է�:���Ҽ�
//���: ����
//�μ�ȿ��: ����
void printComplex(Complex x)
{
	printf("%f + j%f\n", x.real, x.imag);
}

 int main()
 {
	 myintType count=10; //==>int count =0;

	 //����ü ��������
	Complex a;//struct complex a; //����ü ��������
	a.real=10;//����ü������ ������� ���ٹ�� ==> ����ü�����̸�.��������̸�
	a.imag=20;
	printComplex(a);
	
	return 0;
}

	