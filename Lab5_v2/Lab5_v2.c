#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(void) {
	int a;
	printf("Please Enter a Number: \n");
	scanf("%d", &a);
	int absa = abs(a);
	int savea = absa;
	int stra = absa;
	char save[10];
	sprintf(save, "%07d", stra);
	int c = strlen(save);
	printf("%d\n", c);
	assert(c == 7);
	if ((a > 0)) {
		printf("You entered: %d\n", a);
		printf("The reverse of that is: ");
		while (a > 0) {
			printf("%d", a % 10);
			a = (a / 10);
		}
	}
	if ((a < 0)) {
		printf("You entered: %d\n", a);
		printf("The reverse of that is: -");
		while (absa > 0) {
			printf("%d", absa % 10);
			absa = (absa / 10);
		}
	}
	if ((savea==0)) {
		printf("ERROR\n");
	}
	system("pause");
	return 0;
} 