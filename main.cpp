#include <stdio.h>

int main() {
  int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 8, 4};
  int i = 0;

  while (i < 10) {
      i++;
      if (i > 10) {
          break;
      }
      
      if (i < 5) {
          continue;
      }

    printf("%d\n", array[i]);
    i++;
  }

  return 0;
}
