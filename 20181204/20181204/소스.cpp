#include <stdio.h>
#include <stdlib.h>

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
void printComplex(Complex *ptr) //��κ��� ��� ����ü �����͸� �Ű������� ���� �޴´�.
{
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//�Լ� conjugate()
//�Է�: ���Ҽ�(������)
//���: ����
//�μ�ȿ��: �Էµ� ���Ҽ��� �ӷ����Ҽ��� ��ȯ
void conjugate(Complex *ptr) //*ptr�� input,output�� ��
{
	ptr->imag=-1*ptr->imag;
}

//�Լ� returnConjugate()
//�Է�: ���Ҽ�(������)
//���: ���Ҽ� ����
//�μ�ȿ��: ����
//Complex* returnConjugate(Complex*ptr) //1��
//{
//	Complex temp;
//	temp.real=ptr->real;
//	temp.imag=-1*ptr->imag;
//	return &temp;
//}

//2��
Complex* returnConjugate(Complex*ptr) //1��
{
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex)); //�����Ҵ� dynamic Allocation
	tempPtr->real=ptr->real;
	tempPtr->imag=-1*ptr->imag;
	return tempPtr;
}

 int main()
 {
	 myintType count=10; //==>int count =10;

	 //����ü ��������
	Complex a,b;//struct complex a; //����ü ��������
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex*ptr;
	a.real=10;//����ü������ ������� ���ٹ�� ==> ����ü�����̸�.��������̸�
	a.imag=20;
	printComplex(&a);
	ptr=returnConjugate(&a); printComplex(ptr); //����ü �����͸� ��ȯ

	conjugate(&a); 
	printComplex(&a);
	//free(ptr);printComplex(ptr); �̰��ϸ� HEAP ���� �Ҹ��

	ptr=&a;
	ptr->real=100; //����ü ������ ������ ������� ���ٹ��==> ����ü�����̸�->��������̸�
	ptr->imag=200;
	printComplex(ptr); //&a

	//b=returnConjugate(&a); printComplex(&b);
	
	//convertToConjugate(&a); printComplex(&a);
	
	return 0;
}

	