/* Program to implement linear search and Binary search */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* LINEAR SEARCH */

void linear_search(int search_value, int array[100], int n)
{

  /*Declare Variable */
  int i, location;
  int msec = 0, iterations = 0; /* 10ms */
  clock_t before = clock();

  printf("LINEAR SEARCH\n");
  i = 1;
  while (i <= n)
  {
    i++;

    if (search_value == array[i])
    {
      location = i;
      i = n;

      printf("______________________________________\n");

      printf("The location of Search Key = %d is %d\n", search_value, location);
     
      printf("______________________________________\n");
    }
    clock_t difference = clock() - before;
    msec = difference * 1000 / CLOCKS_PER_SEC;
    iterations++;
  }
   printf("Time taken %d seconds %d milliseconds (%d iterations)\n",
             msec / 1000, msec % 1000, iterations);
}

/* Binary Search to find Search Key */

int main()
{
  int array[1000], search_value = 789, i, j, n = 1000, low, high, location, choice = 1;

  for (i = 1; i <= n; i++)
  {
    array[i] = i;
  }

  linear_search(search_value, array, n);

  return 0;
}
