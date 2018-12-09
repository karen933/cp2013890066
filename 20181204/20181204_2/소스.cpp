#include <stdio.h>

typedef struct complex
{
	double real;
	double imag;
} Complex;

void printComplex(Complex *ptr) 
{
	printf("%f\n",ptr);
}

Complex sumConjugate(Complex *pX, Complex* pY)
{
	Complex z;
	z.real=pX->real + pY->real;
	z.imag=pX->imag + pY->imag;
	return z;
}

int main()
{
	Complex a={4,5},b={1,2},c;
	Complex *ptr;
	ptr=&a;
	c=sumConjugate(&a,&b);
}