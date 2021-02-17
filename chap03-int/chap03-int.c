/*기본자료형
	char : 문자
	int : 정수 (0,-123,333)
		- short int
		- long int
	---------------------
	2byte 
	unsigned short int : 0 ~ 65535
	signed short int : -32768 ~ 32767

*/

#include <stdio.h>

void main() {
	//signed short int si1 = 32767;
	//signed short int si2 = -32768;
	//signed short int si3 = 32768; // overflow

	//unsigned short int us1 = 65535;
	//unsigned short int us2 = us1 + 1;

	//printf("si1(%d), si2(%d), si3(%d), us1(%d), us2(%d)\n", si1, si2, si3, us1, us2);

	signed long int li1 = 2147483647;
	signed long int li2 = -2147483648;
	signed long int li3 = 2147483648; // overflow

	unsigned long int ul1 = 4294967295;
	unsigned long int ul2 = ul1 + 1;

	printf("li1(%d), li2(%d), li3(%d), ul1(%u), ul2(%u)\n", li1, li2, li3, ul1, ul2);
}