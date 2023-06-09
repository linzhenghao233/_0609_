#include <stdio.h>

int main(void) {
	int num, temp, three = 0, count = 0;
	for (int i = 1000; i < 10000; i++) {
		temp = i;
		for (int j = 1; j <= 4; j++) {
			num = temp % 10;
			if (num != 0 && num % 3 == 0) {
				three = 1;
				break;
			}
			temp /= 10;
		}
		if (three != 1)
			count++;
		three = 0;
	}

	printf("%d", count);

	return 0;
}