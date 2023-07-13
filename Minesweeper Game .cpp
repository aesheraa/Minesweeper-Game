

/*                   */



#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

//0 is soil, 1 is mine 

int main() {

	int line=0, column= 0, toprak = 0; 

	cout<< " mayýn tarlasý boyutunu giriniz: " << endl;

	cin >> line >> column;

	int tarla[line][column];

	int t[line][column];

	srand(time(NULL));

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {



			tarla[i][j] = rand() % 2;   // % 50 ihtimalle mayýn var demek bu 
			t[i][j] = 5;
			if (tarla[i][j] == 0) {

				toprak++;
			}
		}
	}
	cout << " kontrol amacli" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << tarla[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;

	int i = 0 , j = 0;
	while (true) {
		for (i = 0; i < line; i++) {
			for (j = 0; j < column; j++) {
				cout << t[i][j] << " ";
			}
			cout << endl;

		}
		cout << " acmak istedigin indisleri gir 0 ya da 1 " << endl;
		cin >> i >> j;
		if (i >= 0 && j >= 0 && i < line && j < column) {
			if (t[i][j] == 5 && tarla[i][j] == 0) {
				t[i][j] = tarla[i][j];
				toprak--;
				if (toprak == 0) {
					cout << " butun mayinlari buldun" << endl;
					return 0;
				}
			}


			else if (t[i][j] == 5 && tarla[i][j] == 1) {

				cout << " mayina bastiniz" << endl;
				return 0;
			}

			else {
				cout << "daha once actiginiz yeri tekrar acmaya calistiniz" << endl;
			}
		}
		else {
			cout << "gecersiz index girdiniz"<<endl;
		}
	}
	return 0;

}