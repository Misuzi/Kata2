#include <stdio.h>
#include <stdlib.h>

#define NUM_TESTS 10
#define MAX_LIST_LENGTH 100


using namespace std;



int main()
{
  int *number_list;
  unsigned long list_length;
  unsigned int test_num, i;


  // Run tests
  for (test_num = 0; test_num < NUM_TESTS; test_num++)
  {
    list_length = (rand() % MAX_LIST_LENGTH) + 1;
    // Create and populate list
    number_list = new int[list_length];
    for (i = 0; i < list_length; i++)
    {

    }




  }

  // Return results


  return 0;
}
