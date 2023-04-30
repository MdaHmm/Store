#include "Products.h"

// Кодировка UTF-8

void print_prod(const product& prod){
	std::cout << "Наименование: " << prod.name << "\n";
	std::cout << "Количество на складе: " << prod.number << "\n";
	std::cout << "Цена: " << prod.price << "р." << "\n\n";
	}

	int full_price(const product& prod) {
		int sum = 0;
		for (int i{}; i < prod.number; i++)
			sum += prod.price;
		return sum;
	}

	bool sell(product& prod, int sell){
		if (sell <= prod.number){
			prod.number -= sell;
			return true;
		}
		return false;
	}



