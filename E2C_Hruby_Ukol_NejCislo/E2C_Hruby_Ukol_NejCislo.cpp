#include <stdio.h>

int main(void) {

	int a = 2, b = 6, c = 7;
	int max;
	int min;

	if (a == b) {
		min = a;
	}
	else {
		if (a < b) {
			min = b;
		}
		else {
			min = a;
		}
	}
	if (min == c) {
		max = c;
	}
	else {
		if (min < c) {
			max = c;
		}
		else {
			max = min;
		}
	}
	printf("nejvetsi cislo je %d\n", max);
}