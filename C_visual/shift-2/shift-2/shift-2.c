#include <stdio.h>
int main(void)
{
	int pss[16] = { 0 };//�ǽ¼��� 2������
	int ss[16] = { 0 };//�¼��� 2������
	int res[16] = { 0 };//��� ��
	int bbg[33] = { 0 };//ó�� �κа�
	
	int shift[65] = { 0 };//shift ����
	int ps; //scanf�ִ� �� 
	int s; //scanf�ִ� ��
	int i1; //�迭 �ε��� �ϳ� �ϳ� 
	int a; //2�� ������ �� ������  
	int i2; //�迭 �ε��� �ϳ� �ϳ� 
	int i3;
	int k; //�迭 �ε��� �ϳ� �ϳ� 
	int m;

	printf("���� �Է��Ͻÿ�;\n");
	scanf("%d %d", &ps, &s);

	if (ps < 0 && s < 0)
	{
		ps = ps * (-1);
		s = s * (-1);
	}
	if (ps < 0 && s > 0)
	{
		ps = ps * (-1);
	}
	if (ps > 0 && s < 0)
	{
		s = s * (-1);
	}
	// ����� �ٲٱ�
	
	for (i1 = 0; i1 < 16; i1++) //<-ps[15}-ps[0]; <-�������� �Է� �ǽ¼� ���
	{
		if (i1 < 15)
		{
			a = ps % 2;
			pss[i1] = a;
			ps = ps / 2;
		}

	}//ù��° �Է� ���� �� 2������

	printf("                 ");
	for (i1 = 15; i1 >= 0; i1--)
	{
		printf("%d", pss[i1]);
	}

	for (i2 = 0; i2 < 16; i2++) //<-ss[15}-ss[0]; <-�������� �Է�  �¼����
	{
		if (i2 < 15)
		{
			a = s % 2;
			ss[i2] = a;
			s = s / 2;
		}

	}//�ι�° �Է� ���� �� 2������
	printf("\nx                ");
	for (i2 = 15; i2 >= 0; i2--)
	{
		printf("%d", ss[k]);
	}//arr2����

	printf("\n------------------------------------");
	printf("\n ");
	for (m = 31; m >= 0; m--)
	{
		printf("%d", bbg[m]);
	}
	printf(" �����κа�  ");// ���� �ʱ� ���

	for (i2 = 0; i2 < 16; i2++)
	{
		for (i1 = 0; i1 < 16; i1++)
		{
			arr5[i1 + 16] = [i1] + arr2[i2];
		}

		printf(" \n+");
		for (m = 31; m >= 0; m--)
		{
			printf("%d", arr5[m]);
			
		}
		printf("\n ");
		printf("\n---------------------------------------");

		for (i2 = 0; i2 < 16; i2++)
		{
			printf("\n ");
			for (i3 = 16; i3 > 0; i3--)
			{
				arr6[i2 + i3] = arr4[i2 + i3] + arr5[i2 + i3];
				printf("%d", arr6[i2 + i3]);
			}
		}
		for (i2 = 0; i2 < 16; i2++)
		{
			printf("\n ");
			for (i3 = 16; i3 > 0; i3--)
			{
				arr6[i2 + i3] = arr6[i2 + i3 - 1];
				printf("%d", arr6[i2 + i3]);
			}
		}		
	}
}