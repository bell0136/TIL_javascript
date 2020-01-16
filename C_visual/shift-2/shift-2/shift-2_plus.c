#include <stdio.h>
int main(void)
{
	int pss[16] = { 0 };//피승수를 2진수로
	int ss[16] = { 0 };//승수를 2진수로
	int res[16] = { 0 };//결과 값
	int bbg[65] = { 0 };//처음 부분곱
	int bbgp[65] = { 0 };
	int shift[65] = { 0 };//shift 저장
	int ps; //scanf넣는 값 
	int s; //scanf넣는 값
	int i1; //배열 인덱스 하나 하나 
	int a; //2로 나눴을 때 나머지  
	int i2; //배열 인덱스 하나 하나 
	int i3;
	int i4;
	int i5;
	int k; //배열 인덱스 하나 하나 
	int m;
	int j = 0;
	int cc;

	printf("수를 입력하시오\n");
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
	// 양수로 바꾸기

	for (i1 = 0; i1 < 16; i1++) //<-ps[15}-ps[0]; <-방향으로 입력 피승수 출력
	{
		if (i1 < 15)
		{
			a = ps % 2;
			pss[i1] = a;
			ps = ps / 2;
		}
	}//첫번째 입력 받은 수 2진수로

	printf("                 ");
	for (i1 = 15; i1 >= 0; i1--)
	{
		printf("%d", pss[i1]);
	}

	for (i2 = 0; i2 < 16; i2++) //<-ss[15}-ss[0]; <-방향으로 입력  승수출력
	{
		if (i2 < 16)
		{
			a = s % 2;
			ss[i2] = a;
			s = s / 2;
		}

	}//두번째 입력 받은 수 2진수로
	printf("\nx                ");
	for (i2 = 15; i2 >= 0; i2--)
	{
		printf("%d", ss[i2]);
	}//arr2정렬

	printf("\n------------------------------------");
	printf("\n ");
	for (m = 31; m >= 0; m--)
	{
		printf("%d", bbgp[m]);
	}
	printf(" 누적부분곱  ");// 누적 초기 출력
	printf(" \n  ");

	for (cc = 0; cc < 16; cc++)
	{
		if (ss[cc] == 1)
		{
			for (i2 = 0; i2 < 16; i2++)
			{
				bbgp[i2 + 16] = pss[i2];
			}
		}
		if (ss[i1] == 0)
		{
			for (i2 = 0; i2 < 16; i2++)
			{
				bbgp[i2 + 16] = 0;
			}

		}
		printf("\n+");
		for (i2 = 31; i2 >= 0; i2--)
		{
			printf("%d", bbgp[i2]);
		}
		printf("\n---------------------------------\n");
		for (i1 = 31; i1 >= 0; i1--)
		{
			if (i1 == 0)
			{
				bbgp[i1] += bbg[i1];
			}
			if (i1 > 0)
			{
				bbgp[i1] += bbgp[i1];

			}
		}
		printf("\n ");
		for (i3 = 31; i3 >= 0; i3--)
		{
			printf("%d", bbgp[i3]);
		}
		printf("\n");


		for (i4 = 31; i4 >= 0; i4--)
		{
			bbgp[i4] = bbgp[i4 + 1];
			printf("%d", bbgp[i4]);
		}
		

	}
}