#include "func.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;
	int k,l;
	cout << "������� ���-�� ����� ������: " << endl;
	cin >> n;
	product* a = new product[n];
	cout << "������� ������ � ������: " << endl;
	cin.ignore();
	for (int i = 0;i < n;i++) {
		cout << "�������� ������ � "<< i+1 << endl;
		getline(cin, a[i].prod);
		cout << "���������� ������� ������: " << endl;
		cin >> a[i].col;
		cout << "���� �� ����� ������� ������: " << endl;
		cin >> a[i].price;
		cin.ignore();
		cout << "����� ��������� ����� ������� ������ = "<< sum(a, i);
		cout << endl;
	}
	
	do {
		cout << "1. �������� ���-�� ������" << endl;
		cout << "2. �������� ���� ������" << endl;
		cout << "3. ������� �������" << endl;
		cout << "0. �����" << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "������� ����� ������ � �������� ������ �������� ���-��: " << endl;
			cin >> l;
			if (l == 0 || l > n || l<0)
				cout << "����� �� ������!" << endl;
			else
				zamen(a, l);
			break;
		case 2:
			cout << "������� ����� ������ � �������� ������ �������� ����: " << endl;
			cin >> l;
			if (l == 0 || l > n|| l<0)
				cout << "����� �� ������!" << endl;
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