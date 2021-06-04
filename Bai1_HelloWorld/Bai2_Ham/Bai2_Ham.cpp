#pragma once
#include <iostream>
#include <string> // standard : thu vien chuan
#include "tinhtoan.h"
using namespace std;
//viet chuong trinh  nhap vao a b. Lua chon 4 option +, - , *, / va tinh 
//dung ham


// vi du
// Nhap so a: 2
// Nhap so b: 3
// Chon cong thuc tinh 1. + , 2 - , 3 * , 4 /, 0 - exit
// In ra ket qua: Ket qua la: 5

// tao file caculator.h chua 4 ham tinh + , - , *, /

void menu() {
	int choice;
	int a;
	int b;
	do
	{
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "__________tinh gia tri_________" << endl;
		cout << "(1) a + b" << endl;
		cout << "(2) a - b" << endl;
		cout << "(3) a * b" << endl;
		cout << "(4) a / b" << endl;
		cout << "__________________________________" << endl;
		cout << "vui long nhap choice: ";
		cin >> choice;

		switch (choice)
	
		{
		case 1:
			cout << tong(a, b) << endl;
			break;
		case 2:
			cout << hieu(a, b) << endl;
			break;
		case 3:
			cout << tich(a, b) << endl;
			break;
		case 4:
			cout << thuong(a, b) << endl;
			break;
		default:
			break;
		}
	} while (choice != 0);
}

int main()
{
	menu();

    system("pause"); 
}
