/* Program to implement linear search and Binary search */

#include <stdio.h>

#include <stdlib.h>

/* LINEAR SEARCH */

void linear_search(int search_key, int array[100], int n)
{

  /*Declare Variable */
  int i, location;

  printf("LINEAR SEARCH\n");

  for (i = 1; i <= n; i++)
  {
    if (search_key == array[i])
    {
      location = i;

      printf("______________________________________\n");

      printf("The location of Search Key = %d is %d\n", search_key, location);

      printf("______________________________________\n");
    }
  }
}

/* Binary Search to find Search Key */

void binary_search(int search_key, int array[100], int n)
{

  int mid, i, low, high;

  low = 1;
  high = n;

  mid = (low + high) / 2;

  i = 1;
  printf("BINARY SEARCH\n");
  printf("\n %d\t", mid);
  // while (i > n)
  while (search_key == array[mid - 1])
  {

    if (search_key <= array[mid])
    {

      low = 1;

      high = mid + 1;

      mid = (low + high) / 2;
    }
    else
    {

      low = mid + 1;

      high = n;

      mid = (low + high) / 2;
    }
  }

  printf("__________________________________\n");
  printf("location=%d\t", mid);
  printf("Search_Key=%d Found!\n", search_key);
  printf("__________________________________\n");
}

int main()
{
  int array[100], search_key = 78, i, j, n = 100, low, high, location, choice = 1;


  for (i = 1; i <= n; i++)
  {

    array[i] = i;
  }

  // linear_search(search_key, array, n);

  binary_search(search_key,array,n);

  return 0;
}
