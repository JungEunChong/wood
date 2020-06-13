#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, try = 0;
	int answer;
	srand((unsigned int)time(NULL));

	answer = rand() % 100 + 1;

	while(1) {
		while(1) {
			printf("num : ");
			scanf("%d", &num);

			if(num > 100 || num < 0) printf("0 <= num <= 100\n");
			else break;
		}

		if(num > answer) {
			printf("down!!!\n");
			try += 1;
		}
		else if(num < answer) {
			printf("up!!!\n");
			try += 1;
		}
		else {
			printf("great!!!\n");
			break;
		}
	}

	printf("your try : %d\n", try);
	printf("End\n");

	return 0;
}
