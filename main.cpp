#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM_TESTS 10
#define MAX_INTERVAL 10
#define LIST_LENGTH 100


using namespace std;

int basicSearch(int* list, unsigned int list_length, int search_term);
int search1(int* list, unsigned int list_length, int search_term);
int search2(int* list, unsigned int list_length, int search_term);
int search3(int* list, unsigned int list_length, int search_term);
int search4(int* list, unsigned int list_length, int search_term);
int search5(int* list, unsigned int list_length, int search_term);


int main()
{
  int *number_list;
  unsigned int test_num, i;
  unsigned int random_index, random_interval;
  int random_number;
  int result;

  srand(time(NULL));

  // Create and populate list
  number_list = new int[LIST_LENGTH];
  random_interval = (rand() % MAX_INTERVAL) + 1;
  for (i = 0; i < LIST_LENGTH; i++)
  {
    number_list[i] = i * random_interval;
  }

  // Run tests
  for (test_num = 0; test_num < NUM_TESTS; test_num++)
  {
    // Generate Search Term
    random_index = rand() % LIST_LENGTH;
    random_number = number_list[random_index];

    // Run Search Algorithms
    printf("Searching for %d at %d\n", random_number, random_index);

    result = search1(number_list, LIST_LENGTH, random_number);
    printf("%d was found at %d\n", random_number, result);


  }
  // Deallocate Memory
  delete number_list;

  // Return results


  return 0;
}

int basicSearch(int* list, unsigned int list_length, int search_term)
{
  unsigned int i;
  for (i = 0; i < list_length; i++)
  {
    if (list[i] == search_term)
    {
      return i;
    }
  }
  return -1;
}


// For loop method
int search1(int* list, unsigned int list_length, int search_term)
{
  unsigned int i;
  int pointer = list_length / 2;
  for (i = 0; i < list_length / 2 + 1; i++)
  {
    if (list[pointer] == search_term)
    {
      return pointer;
    }
    else if (list[pointer] > search_term)
    {
      pointer -= list_length / (pow(2, i + 2));
    }
    else
    {
      pointer += list_length / (pow(2, i + 2)) + 1;
    }
  }
  return -1;
}

int search2(int* list, unsigned int list_length, int search_term)
{

  return 0;
}

int search3(int* list, unsigned int list_length, int search_term)
{

  return 0;
}

int search4(int* list, unsigned int list_length, int search_term)
{

  return 0;
}

int search5(int* list, unsigned int list_length, int search_term)
{

  return 0;
}
