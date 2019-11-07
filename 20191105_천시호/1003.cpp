#include<stdio.h>

int main() {
	int fiboa[41] = { 0 };
	int fibob[41] = { 0 };
	fiboa[0] = 1;
	fiboa[1] = 0;
	fiboa[2] = 1;
	fibob[0] = 0;
	fibob[1] = 1;
	int a, b;
	scanf("%d", &a);
	for (int i = 2; i <= 40; i++){
		fiboa[i] = fiboa[i - 1] + fiboa[i - 2];
		fibob[i] = fibob[i - 1] + fibob[i - 2];
	}
	for (int i = 0; i < a; i++){
		scanf("%d", &b);
		printf("%d %d\n", fiboa[b], fibob[b]);
	}
}