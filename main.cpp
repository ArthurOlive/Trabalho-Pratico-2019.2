#include "cripto.h"
#include "simd.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char valor1[18];
	char valor2[18];
	char num1[3], num2[3];
	int k = 0, x = 0;
	int val1[4];
	int val2[4];
	int arm1, arm2, sum, mul;
	
	cin >> valor1;
	cin >> valor2;
	cout << endl;

	for (int i = 0; i < 18; ++i) {
		if (valor1[i] != '[' && valor1[i] != ',' && valor1[i] != ']') {
			num1[k] = valor1[i];
			num2[k] = valor2[i];
			k++;
		} else if(valor1[i] == ',' || valor1[i] == ']'){
			k = 0;
			val1[x] = atoi(num1);
			val2[x] = atoi(num2);
			x++;
		}
	}

	arm1 = armazenar((char) val1[0],(char) val1[1], (char) val1[2], (char) val1[3]);
	arm2 = armazenar((char) val2[0],(char) val2[1], (char) val2[2], (char) val2[3]);

	cout << "Operandos em 32 bits: " << arm1 << endl;
	cout << "Operandos em 32 bits: " << arm2 << endl;
	cout << endl;

	//Operações
	sum = soma(arm1, arm2);
	mul = mult(arm1, arm2);

	cout << "Soma em 32 bits : " << sum << endl;
	cout << "Multiplicacao : "   << mul << endl;
	cout << endl;

	cout << "[" << setfill('0') << setw(3) << (int) primeiro(sum) << ", " 
		<< setfill('0') << setw(3) << (int) segundo(sum) << ", " 
		<< setfill('0') << setw(3) << (int) terceiro(sum) << ", " 
		<< setfill('0') << setw(3) << (int) quarto(sum) << "] = " << "Soma " << endl;
	
	cout << "[" << setfill('0') << setw(3) << (int) primeiro(mul) << ", " 
		<< setfill('0') << setw(3) << (int) segundo(mul) << ", " 
		<< setfill('0') << setw(3) << (int) terceiro(mul) << ", " 
		<< setfill('0') << setw(3) << (int) quarto(mul) << "] = " << "Multiplicação " << endl;
	cout << endl;

	long long cod_sum = codificar(sum);
	long long cod_mul = codificar(mul);

	cout << fixed << setprecision(0) << "Soma Cripto 64 bits          = " << cod_sum << endl;
	cout << fixed << setprecision(0) << "Multiplicacao Cripto 64 bits = " << cod_mul << endl;
	cout << endl;

	cout << fixed << setprecision(0) << "Valor Codificado  = ";
	printCod(cod_sum);
	cout << endl;
	cout << fixed << setprecision(0) << "Soma Decodificada = " << decodificar(cod_sum) << endl;
	cout << endl;

	cout << fixed << setprecision(0) << "Valor Codificado  = " ;
	printCod(cod_mul);
	cout << endl;
	cout << fixed << setprecision(0) << "Mul  Decodificada = " << decodificar(cod_mul) << endl;
	cout << endl;
	
	system("pause");
	return 0;
}