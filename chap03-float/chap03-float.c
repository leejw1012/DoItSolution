/*
* chap03-float.c
* tlftn wkfygud : float, double
* ------------------------------
* float : 4 byte, 1.2E-38 ~ 3.4E38
* double 8 byte, 2.2E-308 ~ 1.8E308
*/

#include <stdio.h>

void main() {
	

	float pi = 3.141592f;
	float t1 = 0.123e3;

	printf("pi(%f)(%f)(%e)\n", pi, t1, t1);

}