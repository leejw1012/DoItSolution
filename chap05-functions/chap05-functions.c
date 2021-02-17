#include <stdio.h>

/* 함수선언
*/

void print();
void printx(int x);

void main(void) {
	printf("main function!\n");
	print(); //함수 호출
	printx(3);
}


/*
* 함수정의:본체, 내용이 기술
*/

void print() {
	printf("print function!\n");
}

void printx(int x) {
	printf("printx function%d!\n", x);
}