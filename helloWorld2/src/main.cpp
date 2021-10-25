#include <stdio.h>

int main(void) {
  (void)printf("Hello World 2!\n\n");

  for (int i = 0; i < 10; i++) {
    (void)printf("%d ", i);
  }

  (void)printf("\n");
  return 0;
}
