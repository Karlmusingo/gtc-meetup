#include <stdio.h>
#include <time.h>

int main()
{

  int msec = 0, trigger = 10, iterations = 0; /* 10ms */
  clock_t before = clock();

  do
  {
    /*
   * Do something to busy the CPU just here while you drink a coffee
   * Be sure this code will not take more than `trigger` ms
   */

    clock_t difference = clock() - before;
    msec = difference * 1000 / CLOCKS_PER_SEC;
    iterations++;
  } while (msec < trigger);

  printf("Time taken %d seconds %d milliseconds (%d iterations)\n",
         msec / 1000, msec % 1000, iterations);
}