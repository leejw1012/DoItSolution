	/*�ڷ���
	char : ����
	int : ���� (0,-123,333)
		- short int
		- long int
	---------------------
	signed : -, +
	unsigned : +
	---------------------
	����(variable)
	underscore(_), ������ ����,
	������, ����, underscore

	char : 1byte
	signed
	unsigned

	*/

#include <stdio.h>

void main() {
	// signed
	//char ch = 'a';	// ascii
	//char cd = 97;	// ������
	//char cx = 0x61;	// 16����
	//char _co = 0141;// 8����

	//printf("ch=(%c), cd(%c), cx(%c)\n", ch, cd, cx);
	//printf("ch=(%d), cd(%x), cx(%o), co(%c)\n", ch, cd, cx, _co);

	//signed char sc1 = 127;
	//signed char sc2 = -128;
	//signed char sc3 = 128; // ��� �� overflow : -128

	//unsigned char uc1 = 255;

	//printf("sc1(%d), sc2(%d), sc3(%d), uc1(%d)\n", sc1, sc2, sc3, uc1);

	char ch = 'a';
	char ch1 = ch + 1;
	printf("ch=(%c), ch1(%c)(%d) \n", ch, ch1, ch1);
}