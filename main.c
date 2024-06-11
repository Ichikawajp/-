//ジャンケンを行うプログラムの作成
//3回かつまで繰り返す
//手は1ならグー、2ならチョキ, 3ならパー
//CPU の　手は 乱数で決める
//
//乱数 , for , 変数       2024 / 5 / 23
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//rand()
#include <time.h>		//time()

int player_wincount;
int cpu_wincount;
//============================
// 　結果　かんす
//============================

void jibun_gu()  // 1
{
	printf("[自分]: グー\n");
}

void jibun_tyo() // 2
{
	printf("[自分]: チョキ\n");
}

void jibun_pa()  // 3
{
	printf("[自分]: パー\n");
}

void kekka_gu()  // 1
{
	printf("[CPU]: グー\n");
}

void kekka_tyo() // 2
{
	printf("[CPU]: チョキ\n");
}

void kekka_pa()  // 3
{
	printf("[CPU]: パー\n");
}


void win_end()
{
	printf("[システム]３回以上勝ったためあなたの勝利です。\n");
	printf("==============================================");
}


//============================
// 　　　システム
//============================


void main()
{
	int player_wincount = 0;
	int cpu_wincount = 0;

	while (player_wincount < 3)
	{
		srand((unsigned int)time(NULL));	//RESET
		printf("=====================\n");
		printf("[CPU]: じゃんけん...");
		int my_hand = 0;
		scanf("%d", &my_hand);

		if (my_hand == 1)
		{
			jibun_gu();
		}
		else if (my_hand == 2)
		{
			jibun_tyo();
		}
		else if (my_hand == 3)
		{
			jibun_pa();
		}
		else
		{
			printf("[システム]: エラー");
			return 0;
		}

		int cpu_hand = rand() % 3 + 1;

		if (cpu_hand == 1)
		{
			kekka_gu();
		}
		else if (cpu_hand == 2)
		{
			kekka_tyo();
		}
		else if (cpu_hand == 3)
		{
			kekka_pa();
		}
		else
		{
			printf("[システム]: エラー");
			return 0;
		}

//===============================================
//				ジャンケン処理
//===============================================


		if (my_hand == cpu_hand)
		{
			printf("[CPU]あいこです\n");
		}
		else if (my_hand == 1)
		{
			if (cpu_hand == 2)
			{
				printf("[CPU]: 負けたわ\n");
				player_wincount = player_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: 俺の勝ち！\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
			}
		}
		else if (my_hand == 2)
		{
			if (cpu_hand == 3)
			{
				printf("[CPU]: 負けたわ\n");
				player_wincount = player_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: 俺の勝ち！\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
			}
		}
		else if (my_hand == 3)
		{
			if (cpu_hand == 1)
			{
				printf("[CPU]: 負けたわ\n");
				player_wincount = player_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: 俺の勝ち！\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU勝利数]: %d\n", cpu_wincount);
				printf("[プレイヤー勝利数]: %d\n", player_wincount);
			}
		}
		else
		{
			printf("[システム]エラー");
			return 0;
		}
	}
}