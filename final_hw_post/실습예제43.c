#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int pos_system()
{
	char num[10] = "1";
	int sum = 0;

	while (1) {
		printf("제품(종료 시 0 입력) : ");
		scanf("%s", num);
		if (!strcmp(num, "coffee")) {
			sum += 1000;
		}
		else if (!strcmp(num, "bread")) {
			sum += 1000;
		}
		else if (!strcmp(num, "sprite")) {
			sum += 1500;
		}
		else if (!strcmp(num, "coke")) {
			sum += 1500;
		}
		else if (!strcmp(num, "lemonade")) {
			sum += 2000;
		}
		else if (!strcmp(num, "0")) {
			return sum;
		}
		else {
			printf("해당 제품은 없습니다.\n");
		}
	}
}

int main()
{
	printf("제품 구매총액 : %d", pos_system());
}