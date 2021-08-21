#include <stdio.h>
  
int main()
{
    int x = 12, y = 47;
    printf("\nAvant: x = %d, y = %d", x, y);
  
    int temp = x;
    x = y;
    y = temp;
  
    printf("\nApres: x = %d, y = %d", x, y);
    return 0;
}