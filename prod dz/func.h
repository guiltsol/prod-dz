#pragma once
#include "iostream"
#include "string"
#include <windows.h>
#include <iomanip>
using namespace std;
struct product {
	string prod;
	int col;
	int price;
};
double sum(product* x, int k) {
	return(x[k].col * x[k].price);
}
void zamen(product* a, int l) {
	cout << "Кол-во товара: " << endl;
	cin >> a[l - 1].col;
}
void zamen2(product* a, int l) {
	cout << "Цена товара: " << endl;
	cin >> a[l - 1].price;
}
void tabel(product* a, int n) {
	cout << "|" << setw(17) << "Название товара" << setw(17) << "|" << setw(15) << "Кол-во товара" << setw(15) << "|" << setw(13) << "Цена товара" << setw(13) << "|" << setw(25) << "Общая стоимость товара" << setw(25) << "|" << "\n";
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << "\n";
	for (int i = 0;i < n;i++) {
		cout << "|" << setw(17) << a[i].prod << setw(17) << "|" << setw(15) << a[i].col << setw(15) << "|" << setw(13) << a[i].price << setw(13) << "|" << setw(25) << sum(a, i) << setw(25) << "|" << "\n";
	}
}
