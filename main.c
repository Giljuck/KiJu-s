#include<stdio.h>
#include<stdlib.h>
#include "ticketService.h"
#include "money.h"


#define MAX 10
#ifndef PRICE
#define PRICE 3500
#endif 


int main(void) {
	money* coin = malloc(sizeof(money));
	if (coin == NULL) {
		printf("�޸� �Ҵ� ����");
		return 1;
	}
	//�� �Ҵ�
	coin->moneyCase0 = 0;
	coin->moneyCase1 = 10;
	coin->moneyCase2 = 10;
	coin->moneyCase3 = 10;
	coin->moneyCase4 = 10;
	while (1) {
		showCoin(coin);
		if (console() == 2) break;
		int num = ticketNum(MAX);
	}

	free(coin);
	return 0;
}