#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include"money.h"
#include"buyticket.h"

int pay(int max, int num, int price, struct MONEY coin) {
	int totalPrice = num * price;
	printf("�� �����Ͻ� �ı��� ����: %d\n�� ����:\t%d", num, totalPrice);

}