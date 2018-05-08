#include <stdio.h>
#include <math.h>
#include <assert.h>

void Lab6b() {
	// int wc;
	int v;
	int t;
	printf("Input temperature (<=40: \n");
	scanf("%d", &v);
	if (v <= 40) {
		printf("Input wind speed (>= 6 mph): ");
		scanf("%d", &t);
	}
	else {
		printf("Number is out of range. Try again.");
	}
}

	



