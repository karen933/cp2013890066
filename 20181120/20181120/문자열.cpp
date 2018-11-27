#include<stdio.h>
#include <string.h>
void printArray(char*arr, int len){
	for(int i=0;i<len;i++)
	{
		printf("array[%d]=%c\n",i,arr[i]);
	}
}
int main()
{
	char c; //character(문자)형
	c = 'A'; //A=65
	printf("c=%d\n",c);
	printf("c=%c\n",c); //%c character로 표시

	char a[] = {'h','e','l','l','o'};
	printArray(a,5);
	//문자열(string)
	char b[] = "hello";//==>char b[] = {'h','e','l','l','o'.\0};
	printf("%s \n",b);

	printf("the length of the string is %d\n", strlen(b));

	char str1[50] = "hello";
	char*str2="world";
	//printf("%s \n", strcat(str1,str2));
	strcat(str1,str2);
	printf("%s \n",str1);

	strcpy(str1,str2);
	printf("%s \n",str1);

	return 0;
}