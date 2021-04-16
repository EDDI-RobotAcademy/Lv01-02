#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

#define _CRT_SECURE_NO_WARNINGS

#define START_SALARY_MIN	2400
#define START_SALARY_MAX	3600

#define INCREASE_RATE_MAX	10
#define INCREASE_RATE_MIN	1

#define DICE_NUM_MAX	6

#define YEAR	10

#define PLAYER_NUMBER 3

bool problem1(void);
bool problem2(void);
bool problem3(void);
bool problem4(void);
bool problem5(void);

int main(void)
{
	srand(time(NULL));

	//assert(problem1() == true);
	//assert(problem2() == true);
	//assert(problem3() == true);
	//assert(problem4() == true);
	assert(problem5() == true);

	return 1;
}


bool problem1(void)
{
	unsigned int salary1, salary2, salary3;
	float increaseRate1, increaseRate2, increaseRate3;
	char i = 0;;

	salary1 = START_SALARY_MIN + (rand() % ((START_SALARY_MAX - START_SALARY_MIN) + 1));
	salary2 = START_SALARY_MIN + (rand() % ((START_SALARY_MAX - START_SALARY_MIN) + 1));
	salary3 = START_SALARY_MIN + (rand() % ((START_SALARY_MAX - START_SALARY_MIN) + 1));

	printf("******** 1���� ���� ********\n");
	printf("��� 1 : %5d\n", salary1);
	printf("��� 2 : %5d\n", salary2);
	printf("��� 3 : %5d\n", salary3);
	printf("\n\n");

	for (i = 0; i < YEAR; i++)
	{
		increaseRate1 = (float) ((rand() % INCREASE_RATE_MAX) + INCREASE_RATE_MIN) / 100;
		increaseRate2 = (float) ((rand() % INCREASE_RATE_MAX) + INCREASE_RATE_MIN) / 100;
		increaseRate3 = (float) ((rand() % INCREASE_RATE_MAX) + INCREASE_RATE_MIN) / 100;

		salary1 = salary1 + (salary1 * increaseRate1);
		salary2 = salary2 + (salary2 * increaseRate2);
		salary3 = salary3 + (salary3 * increaseRate3);

		printf("********* ���� �λ�� *********\n");
		printf("��� 1 : %0.f%%\n", increaseRate1 * 100);
		printf("��� 2 : %0.f%%\n", increaseRate2 * 100);
		printf("��� 3 : %0.f%%\n", increaseRate3 * 100);


		printf("******** %2d���� ���� ********\n", i + 2);
		printf("��� 1 : %5d\n", salary1);
		printf("��� 2 : %5d\n", salary2);
		printf("��� 3 : %5d\n", salary3);

		printf("\n\n");
	}

	return true;
}

bool problem2(void)
{
	unsigned char dice1, dice2;

	dice1 = (rand() % DICE_NUM_MAX) + 1;
	dice2 = (rand() % DICE_NUM_MAX) + 1;

	printf("��ǻ�� �ֻ��� ����   : %d\n", dice1);
	printf("�÷��̾� �ֻ��� ���� : %d\n", dice2);
	printf("\n");

	if (dice1 > dice2)
	{
		printf("��ǻ�� �¸�!!\n");
	}
	else if (dice1 < dice2)
	{
		printf("�÷��̾� �¸�!!\n");
	}
	else
	{
		printf("���º�!!\n");
	}

	return true;
}

bool problem3(void)
{
	unsigned char dice1[3] = { 0 };
	unsigned char dice2[3] = { 0 };
	unsigned char dice1_sum = 0;
	unsigned char dice2_sum = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		dice1[i] = (rand() % DICE_NUM_MAX) + 1;
		dice2[i] = (rand() % DICE_NUM_MAX) + 1;
		dice1_sum += dice1[i];
		dice2_sum += dice2[i];
	}


	printf("��ǻ�� �ֻ��� ����   : %d, %d, %d\n", dice1[0], dice1[1], dice1[2]);
	printf("�÷��̾� �ֻ��� ���� : %d, %d, %d\n", dice2[0], dice2[1], dice2[2]);

	printf("\n");

	if (dice1_sum > dice2_sum)
	{
		printf("��ǻ�� �¸�!!\n");
	}
	else if (dice1_sum < dice2_sum)
	{
		printf("�÷��̾� �¸�!!\n");
	}
	else
	{
		printf("���º�!!\n");
	}

	return true;
}



bool problem4(void)
{
	char dice1[2] = { 0 };
	char dice2[2] = { 0 };
	char dice3[2] = { 0 };
	char dice_sum[3] = { 0 };

	char array_index = 0;
	char winner_number = 0;
	char winner[3] = { 0 };
	char max = 0;
	int i;
	int result = 0;

	for (i = 0; i < 2; i++)
	{
		dice1[i] = (rand() % DICE_NUM_MAX) + 1;
		dice2[i] = (rand() % DICE_NUM_MAX) + 1;
		dice3[i] = (rand() % DICE_NUM_MAX) + 1;
		dice_sum[0] += dice1[i];
		dice_sum[1] += dice2[i];
		dice_sum[2] += dice3[i];
	}

	printf("�÷��̾�1 �ֻ��� ���� : %d, %d\n", dice1[0], dice1[1]);
	printf("�÷��̾�2 �ֻ��� ���� : %d, %d\n", dice2[0], dice2[1]);
	printf("�÷��̾�3 �ֻ��� ���� : %d, %d\n", dice3[0], dice3[1]);
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		if (dice_sum[i] > max)
		{
			array_index = 0;
			max = dice_sum[i];
			winner_number = 1;
			winner[array_index] = i + 1;
			array_index++;
		}
		else if (dice_sum[i] == max)
		{
			winner[array_index] = i + 1;
			winner_number++;
			array_index++;
		}
	}

	if (winner_number == 1)
	{
		printf("�÷��̾�%d �¸�!!\n", winner[0]);
	}
	else if (winner_number == 2)
	{
		printf("�÷��̾�%d, �÷��̾�%d �¸�!!\n", winner[0], winner[1]);
	}
	else
	{
		printf("�÷��̾�1, �÷��̾�2, �÷��̾�3 �¸� !!\n");
	}

	return true;
}

bool problem5(void)
{
	char dice[PLAYER_NUMBER][2] = { 0 };
	char score[3] = { 0 };
	int selected_player = 0;

	char array_index = 0;
	char winner_number = 0;
	char winner[3] = { 0 };
	char max = 0;
	int i, j;
	int result = 0;

	dice[0][0] = (rand() % DICE_NUM_MAX) + 1;
	dice[1][0] = (rand() % DICE_NUM_MAX) + 1;
	dice[2][0] = (rand() % DICE_NUM_MAX) + 1;
	score[0] += dice[0][0];
	score[1] += dice[1][0];
	score[2] += dice[2][0];

	printf("--------- 1��° �ֻ��� ---------\n");
	printf("�÷��̾�1 �ֻ��� ���� : %d\n", dice[0][0]);
	printf("�÷��̾�2 �ֻ��� ���� : %d\n", dice[1][0]);
	printf("�÷��̾�3 �ֻ��� ���� : %d\n\n", dice[2][0]);
	printf("�÷��̾�1 ���� : %d\n", score[0]);
	printf("�÷��̾�2 ���� : %d\n", score[1]);
	printf("�÷��̾�3 ���� : %d\n\n", score[2]);

	for (i = 0; i < PLAYER_NUMBER; i++)
	{
		if ((dice[i][0] % 2) == 1)
		{
			continue;
		}

		dice[i][1] = (rand() % DICE_NUM_MAX) + 1;
		score[i] += dice[i][1];

		switch (dice[i][1])
		{
			case 1: 
					printf("(player%d)���� 1�� ���Խ��ϴ�.\n", i + 1);
					printf("������ ���� �÷��̾� �Է� :");
					scanf_s("%d", &selected_player);
					while (selected_player <= 0 || selected_player > 3)
					{
						printf("������ ���� �÷��̾� �Է� :");
						scanf_s("%d", &selected_player);
					}
					score[selected_player - 1] = score[selected_player - 1] + 3;

					printf("������ ���� �÷��̾� �Է� :");
					scanf_s("%d", &selected_player);
					while (selected_player <= 0 || selected_player > 3)
					{
						printf("������ ���� �÷��̾� �Է� :");
						scanf_s("%d", &selected_player);
					}

					printf("\n");
					score[selected_player - 1] = score[selected_player - 1] - 2;
				break;

			case 3: score[i] += dice[i][0] * 2;
				break;

			case 4: score[i] = 0;
				break;

			case 6 : 
				for (j = 0; j < PLAYER_NUMBER; j++)
				{
					if (j != i)
					{
						score[j] -= 4;
					}
				}
			break;

			default:
				break;
		}

	}

	printf("--------- 2��° �ֻ��� ���� ---------\n");

	printf("�÷��̾�1 �ֻ��� ���� : %d\n", dice[0][1]);
	printf("�÷��̾�2 �ֻ��� ���� : %d\n", dice[1][1]);
	printf("�÷��̾�3 �ֻ��� ���� : %d\n\n", dice[2][1]);
	printf("�÷��̾�1 ���� : %d\n", score[0]);
	printf("�÷��̾�2 ���� : %d\n", score[1]);
	printf("�÷��̾�3 ���� : %d\n\n", score[2]);

	for (i = 0; i < 3; i++)
	{
		if (score[i] > max)
		{
			array_index = 0;
			max = score[i];
			winner_number = 1;
			winner[array_index] = i + 1;
			array_index++;
		}
		else if (score[i] == max)
		{
			winner[array_index] = i + 1;
			winner_number++;
			array_index++;
		}
	}

	if (winner_number == 1)
	{
		printf("�÷��̾�%d �¸�!!\n", winner[0]);
	}
	else if (winner_number == 2)
	{
		printf("�÷��̾�%d, �÷��̾�%d �¸�!!\n", winner[0], winner[1]);
	}
	else
	{
		printf("�÷��̾�1, �÷��̾�2, �÷��̾�3 �¸� !!\n");
	}

	return true;
}