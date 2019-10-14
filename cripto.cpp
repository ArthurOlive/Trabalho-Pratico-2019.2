#include "cripto.h"
#include <random>
#include <iostream>
using namespace std;

bool testaBit(int arm, int pos) {
	return (arm & (1 << pos - 1));
}

int ligarBit(int arm, int pos) {
	(!testaBit(arm, pos)) ? arm = arm | (1 << pos - 1) : arm = arm;
	return arm;
}

int desligarBit(int arm, int pos) {
	(testaBit(arm, pos)) ? arm = arm xor (1 << pos - 1) : arm = arm;
	return arm;
}

long long codificar(int arm) {
	long long armCod = 0;
	char n = 0;
	int mant = 0;
	int cont = 27;

	for (int i = 0; i < 6; i++) {
		n = rand() % 31;
		testaBit(arm, n) ? arm = desligarBit(arm, n) : arm = ligarBit(arm, n);
		mant = mant | (int) (n << cont);
		cont -= 5;
	}
	armCod |= (long long) arm << 32;
	armCod |= (long long) mant << 0;

	return armCod;
}


int decodificar(long long cod) {
	int arm = 0;
	char n = 0;
	int mant = 0;
	int cont = 27;
	const int filt = 31;

	arm = cod >> 32; //Recebe 0 para reconstituir o valor
	mant = cod >> 0;

	for (int i = 0; i < 6; i++) {
		n = filt & (mant >> cont);
		testaBit(arm, n) ? arm = desligarBit(arm, n) : arm = ligarBit(arm, n);
		cont -= 5;
	}

	return arm;
}

void printCod(long long cod) {
	int arm = 0;
	char n = 0;
	int mant = 0;
	int cont = 27;
	const int filt = 31;

	arm = cod >> 32; //Recebe 0 para reconstituir o valor
	mant = cod >> 0;

	cout << arm << " ( ";
	for (int i = 0; i < 6; i++) {
		n = filt & (mant >> cont);
		cout << (int) n << " ";
		cont -= 5;
	}
	cout << ")";
}