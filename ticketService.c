#define _CRT_SECURE_NO_WARNINGS

#include "ticketService.h"
#include <stdio.h>
#include<stdlib.h>
#include"money.h"

int console() {
	int check;
	printf("=====================================\n시스템을 선택해주세요.\n1.식권 구매\t2. 종료.\n");
	while (1) {
		printf(">>");
		scanf_s("%d",&check);
		if (check == 1 || check == 2) return check;
		printf("알맞은 숫자를 입력해주세요.\n");
	}
}

int ticketNum(int max) {
	int num;
	printf("티켓값을 입력해주세요.(최대 10개))\n");
	for (;;) {
		printf(">> ");
		scanf_s("%d", &num);
		if (num <= 0) printf("식권의 개수는 0이하가 될 수 없습니다.\n");
		else if (num > max) printf("최대 식권의 개수인 10개 이상 구매할 수 없습니다.\n");
		else break;
	}
	return num;
}

void showCoin(struct MONEY* coin) {
	printf("=====================================\n");
	printf("현재 자판기가 가지고 있는 현금의 수:\n오만원권:\t%d\n만원권:\t\t%d\n오천원권: \t%d\n천원권:\t\t%d\n오백원권:\t%d\n", coin->moneyCase0, coin->moneyCase1, coin->moneyCase2, coin->moneyCase3, coin->moneyCase4);
}