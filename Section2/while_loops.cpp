#include <cstdio>


int main() {
  
  short i{0};
  while (i < 5) {
    printf("Iteration #%d\n", i);
    i++;
  }
  printf("Finished in %d iterations\n", i);
  return 0;
}
