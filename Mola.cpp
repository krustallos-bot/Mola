#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void main()
{
	// Q1 : 선언할 때에 반드시 a, b, num 같은 영문이여야 하는가?
	// A1 : NO, 한글로 적어도 출력은 가능, 그러나 printf, return 등 코딩할 때 영문이 많이 들어가기에 한/영키를 여러번 입력해야하는 번거로움이 있다. 한글을 사랑한다면 한글로 선언하세용~

// 두 숫자를 입력받아 어떤 숫자가 얼마나 더 큰지 알려주는 코드

		/*
		int 숫자1, 숫자2
		printf("숫자 두 개를 입력 : ");
		scanf_s("%d %d", &숫자1, &숫자2);

		if (숫자1 > 숫자2)
		{
			printf("전자가 %d만큼 더 크다\n",숫자1-숫자2);
		}
		else if (숫자1<숫자2)
		{
			printf("후자가 %d만큼 더 크다\n",숫자2-숫자1);
		}
		else if (숫자1=숫자2)
		{
		printf("같은 숫자 ㄴ\n");
		}
		*/

//입력받은 숫자가 짝수인지 홀수인지 알려주는 코드

		/*
		int 숫자1

		printf("아무 숫자나 써보셈 :");
		scanf_s("%d", &숫자1);

		if (숫자1%2 ==0)
		{
			printf("짝수임\n");
		}

		else
		{
			printf("홀수임\n");
		}
		*/

// 입력받은 3개의 숫자 중 가장 큰 숫자를 알려주는 코드

		/*
		int 숫자1, 숫자2, 숫자3;

		printf("숫자 세개 써보셈");
		scanf_s("%d %d %d", &숫자1, &숫자2, &숫자3);

		if (숫자1>숫자2 && 숫자1>숫자3)
		{
			printf("첫번째 뇨속이 제일 크다 \n");
		}
		else if (숫자2>숫자1 && 숫자2>숫자3)
		{
			printf("두번째 짜식이 제일 크다 \n");
		}
		else if (숫자3>숫자1 && 숫자3>숫자2)
		{
			printf("세번째 숫자가 제일 크다 \n");
		}
		else if (숫자1=숫자2=숫자3)
		{
			printf("뭐야 같은 숫자 왜썼냐\n");
		}
		*/

//값을 입력받아 등급을 정해주는 코드

		/*
		printf("님 몇점이셈? 님 등급 알려dream ");
		scanf_s("%d", &숫자1);

		if (100 >= 숫자1 && 숫자1 > 80)
		{
			printf("A! 오우~ 공부 좀 할 줄 아는 놈인가? \n");
		}
		if (80 >= 숫자1 && 숫자1 > 60)
		{
			printf("B 정도면 뭐, 나쁘진 않네. \n");
		}
		if (60 >= 숫자1 && 숫자1 > 40)
		{
			printf("C라.. 음.. 수업은 들었는데, 복습이 없었구만. \n");
		}
		if (40 >= 숫자1 && 숫자1 > 20)
		{
			printf("D라니.. 어이 형씨, 찍은 거 아뇨? \n");
		}
		if (20 >= 숫자1 && 숫자1 >= 0)
		{
			printf("E라고..? 일부러 틀린 것 같은데.. \n");
		}
		if (숫자1>100 || 0>숫자1)
		{
			printf("이상한 값 넣지 말라고.. 에러 난단 말야 \n");
		}
		*/

//섭씨 값을 입력받아 화씨로 변환해주는 코드

		/*
		double 섭씨;

		printf("지금 섭씨만 알고있고 화씨 모르셈? 그럼 섭씨 적어보셈 알려드림 ");
		scanf_s("%lf", &섭씨);

		double 화씨 = (섭씨 *1.8) + 32;

		printf("섭씨가 %f면 화씨는 %f이셈 \n",섭씨, 화씨);
		*/

//for문 연습

		/*

		for (int i = 1; i < 20; i++)
		{
			printf("현재 for문은 %d번째입니다\n", i);
		}

		*/

//값을 입력받아 구구단을 표시해주는 코드

		/*
		int 숫자;

		printf("구구단 몇단이 궁금하심? 대신 알려dream ");
		scanf_s("%d", &숫자);

		for (int i = 1; i <= 9; i++)
		{
			printf("%d X %d = %d \n",숫자,i,숫자*i);
		}
		*/

// 1부터 100까지의 숫자를 무작위로 생성, 그 숫자를 Up,Down으로 유추하는 간단한 게임

		/*
		srand((unsigned)time(NULL));

			int num = rand() % 100;
			int answer = 0;
			int wrongcount = 0;

			while (1)
			{
				printf("정답은? ");
				scanf_s("%d", &answer);

				if (answer == num)
				{
					break;
				}

				if (answer > num)
				{
					printf("줄이세양\n");
				}

				else
				{
					printf("올려양\n");
				}

				wrongcount++;
			}

			printf("정답까지 %d트 \n", wrongcount);
		}

		*/

// array 연습

		/*
		int iArrayA[5] = { 1, 2, 3, 4, 5 };
		int iArrayB[] = { 1, 2, 3, 4, 5 };
		int iArrayC[5] = { 1, 2, };
		int iArrayD[5] = { 0 };

		for (int i = 0; i < 5; i++)
		{
			printf("iArrayA : %d\n", iArrayA[i]);
		}
		printf("\n\n");
		for (int i = 0; i < 5; i++)
		{
			printf("iArrayB : %d\n", iArrayB[i]);
		}
		printf("\n\n");
		for (int i = 0; i < 5; i++)
		{
			printf("iArrayC : %d\n", iArrayC[i]);
		}
		printf("\n\n");
		for (int i = 0; i < 5; i++)
		{
			printf("iArrayD : %d\n", iArrayD[i]);
		}
	}
*/

//char array 연습
/*
char strOne[5] = { 'G', 'o', 'o', 'd', '\0' };
char strTwo[10] = { 'A', 'f', 't', 'e', 'r', 'n', 'o', 'o', 'n', '\0' };
char strTree[] = "Guys!";

for (int i = 0; i < 5; i++)
{
	printf("%c", strOne[i]);
}
printf("%s, %s\n", strTwo, strTree);
printf("\n");
}
*/

// 행렬 연습

/*
int iArray[4][3] =
{
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 },
	{ 10, 11, 12 },
};

for (int i = 0; i < 4; i++)
{

	for (int j = 0; j < 3; j++)
	{
		printf("%d\t", iArray[i][j]);

		if (j == 2)
		{
			printf("\n");
		}
	}
}

printf("\n");
}

*/

//행렬로 만든 아스키 아트

/*
int map[18][18] =
{
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,1 },
	{ 1,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },


};

for (int i = 0; i < 18; i++)
{

	for (int j = 0; j < 18; j++)
	{
		if (map[i][j] == 1)
		{
			printf("□");
		}
		else if (map[i][j] == 0)
		{
			printf("  ");
		}

		else if (map[i][j] == 2)
		{
			printf("$ ");
		}
	}
	printf("\n");
}
}
*/