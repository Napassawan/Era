#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a;
int main()
{
	printf("Enter Christian era : ");
	scanf("%d", &a);
	if (a >= 0)
	{
		a += 543;
	}
	else
	{
		while (a < 0)
		{
			printf("Please enter number again : ");
			scanf("%d", &a);
		}
		a += 543;
	}
	printf("Buddhist era : %d", a);
}