#include <iostream>
#include "Products.h"

// Коировка UTF-8

int main() {
	setlocale(LC_ALL, "Russian");

	int n,m;

	product p1{
		"Мороженое",
		50,
		70
	};

	product p2{
		"Жевательная резинка",
		456,
		30
	};

	product p3{
		"Сливки",
		18,
		92
	};

	std::cout << "Список товаров на складе: " << "\n";
	print_prod(p1);
	std::cout << std::endl;
	print_prod(p2);
	std::cout << std::endl;
	print_prod(p3);
	std::cout << std::endl;

	std::cout << "При покупке всего товара \"" << p1.name << "\" необходимо будет заплатить " << full_price(p1) << "р.\n\n";

	if (sell(p3, 20))
		std::cout << "Изменения внесены успешно!\n\n";
	else
		std::cout << "Ошибка внесения изменений (нельзя продать больше товара, чем есть на складе)\n\n";
		


	std::cout << "Окончательный список товаров:\n";

	print_prod(p1);
	print_prod(p2);
	print_prod(p3);


	return 0;
}