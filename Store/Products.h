#pragma once
#include <iostream>

struct product {
	char name[30] = " ";
	unsigned int number = 0;
	int price = 0;
};

void print_prod(const product& prod);
int full_price(const product& prod);
bool sell(product& prod, int sell);