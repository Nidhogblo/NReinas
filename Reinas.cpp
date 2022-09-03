#include <iostream>

using namespace std;

int tablero[4]= {-1,-1,-1,-1};

void print();
void algorithm();

int choques(int num,int pos) {
	
	for (int i = 0; i < 4; i++) {
		if ((tablero[i] == num) or (abs(pos - i ) == abs(num - tablero[i]))) {
			return -1;
		}
	}
	return 1;
}
int main()
{
	algorithm();

	
	print();


}

void print() {
	for (int i = 0; i < 4; i++) {
		cout<<tablero[i];
	}
}
/*
void algorithm() {
	for (int i = 0; i < 4; i++) {
		do
		{
			tablero[i] = tablero[i] + 1;

			if (tablero[i] >= 4) {
				tablero[i] = -1;
				tablero[i - 1] = tablero[i - 1] + 1;
				i = i - 2;
				break;
			}

		} while (choques(tablero[i], i) != 1);
	}
}*/
void algorithm() {
	
	for (int i = 0; i <= 3; i++) {
		do
		{
			
			tablero[i] =+ 1;

			if (4<tablero[i]) {
				tablero[i] = -1;
				tablero[i-1] = tablero[i-1] + 1;
				i = i - 2;
				break;
			} 

		}while(choques(tablero[i], i) == 1);
	}
}
