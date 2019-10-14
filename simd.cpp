#include "simd.h"

int armazenar(char v1, char v2, char v3, char v4) {
	int arm = 0;
	arm = arm | (v1 << 24);
	arm = arm | (v2 << 16);
	arm = arm | (v3 << 8);
	arm = arm | (v4 << 0);
	return arm;
}

char primeiro(int arm) {
	char v1;
	v1 = arm >> 24;
	return v1;
}

char segundo(int arm) {
	char v1;
	v1 = arm >> 16;
	return v1;
}

char terceiro(int arm) {
	char v1;
	v1 = arm >> 8;
	return v1;
}

char quarto(int arm) {
	char v1;
	v1 = arm >> 0;
	return v1;
}

int soma(int arm1, int arm2) {
	return armazenar(primeiro(arm1) + primeiro(arm2), segundo(arm1) + segundo(arm2), terceiro(arm1) + terceiro(arm2), quarto(arm1) + quarto(arm2));
}

int mult(int arm1, int arm2) {
	return armazenar(primeiro(arm1) * primeiro(arm2), segundo(arm1) * segundo(arm2), terceiro(arm1) * terceiro(arm2), quarto(arm1) * quarto(arm2));
}