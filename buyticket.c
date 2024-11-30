#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include"money.h"
#include"buyticket.h"

int pay(int max, int num, int price, struct MONEY coin) {
	int totalPrice = num * price;
	printf("총 구매하신 식권의 개수: %d\n총 가격:\t%d", num, totalPrice);

}