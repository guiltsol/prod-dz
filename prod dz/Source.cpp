#include "func.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;
	int k,l;
	cout << "Введите кол-во видов товара: " << endl;
	cin >> n;
	product* a = new product[n];
	cout << "Введите данные о товаре: " << endl;
	cin.ignore();
	for (int i = 0;i < n;i++) {
		cout << "Название товара № "<< i+1 << endl;
		getline(cin, a[i].prod);
		cout << "Количество данного товара: " << endl;
		cin >> a[i].col;
		cout << "Цена за штуку данного товара: " << endl;
		cin >> a[i].price;
		cin.ignore();
		cout << "Общая стоимость всего данного товара = "<< sum(a, i);
		cout << endl;
	}
	
	do {
		cout << "1. Изменить кол-во товара" << endl;
		cout << "2. Изменить цену товара" << endl;
		cout << "3. Таблица товаров" << endl;
		cout << "0. Выход" << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "Введите номер товара у которого хотите изменить кол-во: " << endl;
			cin >> l;
			if (l == 0 || l > n || l<0)
				cout << "Товар не найден!" << endl;
			else
				zamen(a, l);
			break;
		case 2:
			cout << "Введите номер товара у которого хотите изменить цену: " << endl;
			cin >> l;
			if (l == 0 || l > n|| l<0)
				cout << "Товар не найден!" << endl;
			else
				zamen2(a, l);
			break;
		case 3:
			tabel(a, n);
			break;
		}

		if (k != 0)
			system("pause");
	} while (k != 0);


	delete[] a;
	return 0;
}