#include <stdio.h>

int main()
{
	int arr[29] = {0, };
	for (int i = 2; i <= 30; i++) {
		*(arr + i - 2) = i;
	}

	for (int i = 2; i <= 30; i++) {
		for (int j = i * 2; j <= 30; j=j+i) {
			*(arr + j - 2) = 0;
		}
	}
	for (int i = 0; i < 29; i++) {
		if (*(arr+i) != 0) {
			printf("%d ", *(arr+i));
		}
	}
}