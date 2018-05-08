#include <stdio.h>
#include <assert.h>


void main() {
		char symbol;
		int num;
		int count = 0;
		int i = 0;
		printf("\nEnter a positive non-zero number between 5 and 35: ");
		scanf("%d", &num);
		assert(num != 0);
		printf("Please enter a symbol: ");
		scanf(" %c", &symbol);												//Takes character as input
		// printf("\n%c %d\n", symbol, num);								//Uncomment this line to check if input is working
		if ((num < 5) || (num > 35)) {
			main();
		}
		for (int i = 1; i <= num; i++) {
			for (int count = 0; count < i; count++) {
				printf("%c", symbol);
			}
			printf("\n");
		}
		system("PAUSE");
}