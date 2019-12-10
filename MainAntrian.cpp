#include <iostream>
#include "Antrian.h"
#include "function.h"
using namespace std;

int main() {
	int choose;
	do{
		//Tampilan menu
		cout<< "<< ANTRIAN BANK >>\n";
		cout<< "Menu\n";
	    	cout<< "1. Tambah Antrian\n";
		cout<< "2. Kurangi Antrian\n";
		cout<< "3. Keluar \n";
		cout<< "Pilihan : "; cin >> choose;
		cout<< endl;
		switch (choose){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Pilihan tidak tersedia\n";
			break;
		}
	} while (choose !=3);
	return 0;
}
