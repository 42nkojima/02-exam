#include <stdio.h>

void	ft_swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x = 42;
	int y = 24;

	printf("Before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);

	return 0;
}