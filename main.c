//�W�����P�����s���v���O�����̍쐬
//3�񂩂܂ŌJ��Ԃ�
//���1�Ȃ�O�[�A2�Ȃ�`���L, 3�Ȃ�p�[
//CPU �́@��� �����Ō��߂�
//
//���� , for , �ϐ�       2024 / 5 / 23
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//rand()
#include <time.h>		//time()

int player_wincount;
int cpu_wincount;
//============================
// �@���ʁ@����
//============================

void jibun_gu()  // 1
{
	printf("[����]: �O�[\n");
}

void jibun_tyo() // 2
{
	printf("[����]: �`���L\n");
}

void jibun_pa()  // 3
{
	printf("[����]: �p�[\n");
}

void kekka_gu()  // 1
{
	printf("[CPU]: �O�[\n");
}

void kekka_tyo() // 2
{
	printf("[CPU]: �`���L\n");
}

void kekka_pa()  // 3
{
	printf("[CPU]: �p�[\n");
}


void win_end()
{
	printf("[�V�X�e��]�R��ȏ㏟�������߂��Ȃ��̏����ł��B\n");
	printf("==============================================");
}


//============================
// �@�@�@�V�X�e��
//============================


void main()
{
	int player_wincount = 0;
	int cpu_wincount = 0;

	while (player_wincount < 3)
	{
		srand((unsigned int)time(NULL));	//RESET
		printf("=====================\n");
		printf("[CPU]: ����񂯂�...");
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
			printf("[�V�X�e��]: �G���[");
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
			printf("[�V�X�e��]: �G���[");
			return 0;
		}

//===============================================
//				�W�����P������
//===============================================


		if (my_hand == cpu_hand)
		{
			printf("[CPU]�������ł�\n");
		}
		else if (my_hand == 1)
		{
			if (cpu_hand == 2)
			{
				printf("[CPU]: ��������\n");
				player_wincount = player_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: ���̏����I\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
			}
		}
		else if (my_hand == 2)
		{
			if (cpu_hand == 3)
			{
				printf("[CPU]: ��������\n");
				player_wincount = player_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: ���̏����I\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
			}
		}
		else if (my_hand == 3)
		{
			if (cpu_hand == 1)
			{
				printf("[CPU]: ��������\n");
				player_wincount = player_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
				if (player_wincount >= 3)
				{
					win_end();
				}
			}
			else
			{
				printf("[CPU]: ���̏����I\n");
				cpu_wincount = cpu_wincount++;
				printf("[CPU������]: %d\n", cpu_wincount);
				printf("[�v���C���[������]: %d\n", player_wincount);
			}
		}
		else
		{
			printf("[�V�X�e��]�G���[");
			return 0;
		}
	}
}