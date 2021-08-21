#include <stdio.h>
  
// swap addresses
int main() {
  int x = 12, y = 47;
  int *p, *q;
  printf("\nAvant: x = %d, y = %d", x, y);

  p = &x;
  q = &y;

  printf("\nAvant: *p = %p, *q = %p", p, q);

  int *temp = p;

  p = q;
  q = temp;

  printf("\nApres: *p = %p, *q = %p", p, q);
  printf("\nApres: x = %d, y = %d", *p, *q);
  return 0;
}