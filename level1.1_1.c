#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number = 0;
	scanf("%d%d%d", &number);
	switch (number)
	{
	case 001:printf("cola 3.50\n");
		break;
	case 002:printf("lollipop 0.50\n");
		break;
	case 003:printf("noodles 6.00\n");
	}
	char arr[10] = { "hello" };
	scanf("%s", &arr[1]);
	if (arr[1] == "prices")
		printf("cola 3.50\nlollipop 0.50\nnoodles 6.00\n");
}
