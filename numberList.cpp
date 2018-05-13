// numberList.cpp
// numberList class implementation
#include "numberList.h"

class numberList
{
  private:
    int list[];
    unsigned long length;
  public:
    numberList();
    unsigned long getLength();
    int getElement(unsigned long index);
    void rmvElement(unsigned long index);
    void addElement(unsigned long index, int value);
    void setElement(unsigned long index, int value);
} numberList;


numberList::numberList()
{
  
}

// Returns Length of the numberList
unsigned long numberList::getLength()
{

  return 0;
}

// Retrieves the element at the index in the numberList
int numberList::getElement(unsigned long index)
{

  return 0;
}

// Removes the element from the numberList
void numberList::rmvElement(unsigned long index)
{

}
void numberList::addElement(unsigned long index, int value)
{

}
void numberList::setElement(unsigned long index, int value)
{

}
