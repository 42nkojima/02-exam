// 'a' - ('a' - 1)

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    write(1, "\n", 1);
    return 0;
  }

  argv++;
  while (**argv) {
    if ((**argv < 'A' || 'Z' < **argv) && (**argv < 'a' || 'z' < **argv)) {
      write(1, *argv, 1);
      (*argv)++;
      continue;
    }

    int count;
    if (**argv >= 'A' && **argv <= 'Z') {
        count = **argv - ('A' - 1);
    } else if (**argv >= 'a' && **argv <= 'z') {
        count = **argv - ('a' - 1);
    }
    for (int i = 0; i < count; i++)
    {
        write(1, *argv, 1);
    }
    (*argv)++;
  }

  return 0;
}