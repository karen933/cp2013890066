//#include <stdio.h>
////(1)
/*
void main()
{
	int i, j;

	for(i=6; i>1; i--)
	{
		for(j=0; j<2*i-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	for(i=1; i<6; i++)
	{
		for(j=0; j<2*i-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}
*/

//(2)
#include <stdio.h>
int main()

{
	int i, j, k, l;
	for(i=-5;i<6;i++)
	{
		k=1+((2*i+1)%2)*i;
		for(j=-8, printf(" ");j<9;j++)
		{
			if(j>-k &&j<k)printf("%d", ((2*j+1)%2)*j);
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}