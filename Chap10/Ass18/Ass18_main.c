/*
���ϸ�: Ass18_main.c
����: ��������Ʈ�� �÷��̸���Ʈ ���
����:
1. �̹� ��ϵ� SONG ����ü �迭�� ����ϹǷ�, �÷��̸���Ʈ ����� ������ �迭�� ����
	��ϵ� SONG ����ü �迭�� ���α׷� ���� ó������ ���
2. ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡 ��ȣ�� �����ϰ� ��
	�̶�, ����ڰ� ������ �� ��ȣ�� SONG �迭 ������ �ּҸ� playlist[i]�� ����
3. SONG ����ü �迭�� �ε����� 0���� �����ϳ�, �뷡 ��ȣ�� 1���� �������� ����
4. �뷡�� �߰��� ������ �÷��̸���Ʈ �� ��ϰ� ��ü ��� �ð��� ���
5. �÷��̸���Ʈ �ִ� 5��
6. SONG ����ü�� ����, ��Ƽ��Ʈ, �帣, ����ð�(��)�� ����
7. SONG *playlist[5] = {NULL};
�ۼ���: �ȵ���
��¥: 2025.06.07
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct song {
	char title[30];      // �뷡 ����
	char artist[30];     // ��Ƽ��Ʈ
	char genre[20];      // �帣
	int duration;        // ��� �ð�(��)
} SONG;

typedef struct playlist {
	SONG* songs[5];      // �÷��̸���Ʈ �� ���
	int count;           // ���� �÷��̸���Ʈ �� ��
} PLAYLIST;

void ass18(void);
void print_playlist(PLAYLIST* pl);

// �Լ�1 : �����Լ�
int main() {
	ass18(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : SONG ����ü �迭 ��� �� print_playlist �Լ� ȣ���ϴ� �Լ�
void ass18(void) {
	SONG songs[] = { // SONG ����ü �迭 �ʱ�ȭ
		{"thank u, next", "Ariana Grande", "pop", 208},
		{"Attention", "Charlie Puth", "pop", 211},
		{"�� ���� ����", "�ں���	", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
		{"����	", "��ź�ҳ��", "hip-hop", 274},
		{"Awake	", "��ź�ҳ��", "ballad", 226},
		{"�Ƴ���	", "MINO	", "hip-hop", 241}
	};
	PLAYLIST playlist = { {NULL}, 0 }; // �÷��̸���Ʈ �ʱ�ȭ

	printf("	����			��Ƽ��Ʈ		�帣		����ð�\n");
	for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++) {
		printf("%d:	%s		%s		%s		%d��)\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].duration);
	}
	int choice;
	while (playlist.count < 5) {
		printf("\n�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &choice);
		if (choice < 0 || choice > sizeof(songs) / sizeof(songs[0])) { //�� ��ȣ�� ������ ��� ���
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			continue;
		}
		if (choice == 0) {
			return; // 0 �Է� �� ����
		}
		playlist.songs[playlist.count] = &songs[choice - 1]; // ������ �� �ּ� ����
		playlist.count++;
		print_playlist(&playlist); // �÷��̸���Ʈ ���
	}
	printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
}

// �Լ�3 : �÷��̸���Ʈ �� ��ϰ� ��ü ��� �ð� ����ϴ� �Լ�
void print_playlist(PLAYLIST* pl) {
	printf("<< �÷��̸���Ʈ >>\n");
	int total_duration = 0; // ��ü ��� �ð� �ʱ�ȭ
	for (int i = 0; i < pl->count; i++) {
		printf("	%s		%s		%s		%d��\n", pl->songs[i]->title, pl->songs[i]->artist, pl->songs[i]->genre, pl->songs[i]->duration); // �� ���� ���
		total_duration += pl->songs[i]->duration; // ��ü ��� �ð� ���
	}
	printf("�� ��� �ð�: %d��\n", total_duration);
}