// C program to implement iterative Binary Search
#include <stdio.h>
#include <time.h>

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
  int msec = 0, trigger = 10, iterations = 0; /* 10ms */
  clock_t before = clock();

  while (l <= r)
  {
    int m = l + (r - l) / 2;

    clock_t difference = clock() - before;
    msec = difference * 1000 / CLOCKS_PER_SEC;
    iterations++;

    // Check if x is present at mid
    if (arr[m] == x)
    {
      printf("Time taken %d seconds %d milliseconds (%d iterations)\n",
             msec / 1000, msec % 1000, iterations);

      return m;
    }
    // If x greater, ignore left half
    if (arr[m] < x)
    {
      l = m + 1;
    }
    // If x is smaller, ignore right half
    else
    {
      r = m - 1;
    }
  }

  // if we reach here, then element was
  // not present
  return -1;
}

int main(void)
{
  int arr[1000];
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 789;
  for (int i = 1; i <= n; i++)
  {

    arr[i] = i;
  }

  int result = binarySearch(arr, 0, n - 1, x);
  (result == -1) ? printf("Element is not present"
                          " in array")
                 : printf("Element is present at "
                          "index %d",
                          result);
  return 0;
}