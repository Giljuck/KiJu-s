#define _CRT_SECURE_NO_WARNINGS

#include "ticketService.h"
#include <stdio.h>
#include<stdlib.h>
#include"money.h"

int console() {
	int check;
	printf("=====================================\n�ý����� �������ּ���.\n1.�ı� ����\t2. ����.\n");
	while (1) {
		printf(">>");
		scanf_s("%d",&check);
		if (check == 1 || check == 2) return check;
		printf("�˸��� ���ڸ� �Է����ּ���.\n");
	}
}

int ticketNum(int max) {
	int num;
	printf("Ƽ�ϰ��� �Է����ּ���.(�ִ� 10��))\n");
	for (;;) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num <= 0) printf("�ı��� ������ 0���ϰ� �� �� �����ϴ�.\n");
		else if (num > max) printf("�ִ� �ı��� ������ 10�� �̻� ������ �� �����ϴ�.\n");
		else break;
	}
	return num;
}

void showCoin(struct MONEY* coin) {
	printf("=====================================\n");
	printf("���� ���ǱⰡ ������ �ִ� ������ ��:\n��������:\t%d\n������:\t\t%d\n��õ����: \t%d\nõ����:\t\t%d\n�������:\t%d\n", coin->moneyCase0, coin->moneyCase1, coin->moneyCase2, coin->moneyCase3, coin->moneyCase4);
}