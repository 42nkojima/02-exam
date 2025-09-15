#include <stdio.h>
#include <unistd.h>

static void ft_putnbr(int num) {
  if (num > 9) {
    ft_putnbr(num / 10);
  }

  write(1, &"0123456789"[num % 10], 1);
}

int main() {
  for (int i = 1; i <= 100; i++) {
    if (i % 15 == 0) {
      write(1, "fizzbuzz", 9);
    } else if (i % 5 == 0) {
      write(1, "buzz", 5);
    } else if (i % 3 == 0) {
      write(1, "fizz", 5);
    } else {
      ft_putnbr(i);
    }
    write(1, "\n", 1);
  }

  return 0;
}