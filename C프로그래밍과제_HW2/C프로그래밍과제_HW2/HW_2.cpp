#include <stdio.h>
#define size 5

int main(void)
{
	int i;
	int scores[size];
	scores[0]=10;
	scores[1]=20;
	scores[2]=30;
	scores[3]=40;
	scores[4]=50;

	for(i=0;i<size;i++)
		printf("scores[%d]\n",i,scores[i]);

return 0;
}
