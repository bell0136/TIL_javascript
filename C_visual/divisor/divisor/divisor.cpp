#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int i = 0;
	int j = 0;

	printf("���� �Է��Ͻÿ�.\n");
	scanf("%d %d", &num1, &num2);
	
	printf("%d�� ���",num1);
	for (i = 0; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			printf(" %d\n", i);
		}
		if (num1 % i != 0)
		{
			continue;
		}
	}

	printf("%d�� ���", num2);

	for (j = 0; j <= num2; j++)
	{
		if (num2 % j == 0)
		{
			printf(" %d\n", j);
		}
		if (num2 % j != 0)
		{
			continue;
		}
	}


	
}