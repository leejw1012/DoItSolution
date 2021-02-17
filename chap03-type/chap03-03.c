	/*자료형
	char : 문자
	int : 정수 (0,-123,333)
		- short int
		- long int
	---------------------
	signed : -, +
	unsigned : +
	---------------------
	변수(variable)
	underscore(_), 영문자 시작,
	영문자, 숫자, underscore

	char : 1byte
	signed
	unsigned

	*/

#include <stdio.h>

void main() {
	// signed
	//char ch = 'a';	// ascii
	//char cd = 97;	// 십진수
	//char cx = 0x61;	// 16진수
	//char _co = 0141;// 8진수

	//printf("ch=(%c), cd(%c), cx(%c)\n", ch, cd, cx);
	//printf("ch=(%d), cd(%x), cx(%o), co(%c)\n", ch, cd, cx, _co);

	//signed char sc1 = 127;
	//signed char sc2 = -128;
	//signed char sc3 = 128; // 출력 시 overflow : -128

	//unsigned char uc1 = 255;

	//printf("sc1(%d), sc2(%d), sc3(%d), uc1(%d)\n", sc1, sc2, sc3, uc1);

	char ch = 'a';
	char ch1 = ch + 1;
	printf("ch=(%c), ch1(%c)(%d) \n", ch, ch1, ch1);
}