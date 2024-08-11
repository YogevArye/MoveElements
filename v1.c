#include <stdio.h>  
void MoveElements(int array[], size_t size, size_t count);
void ShiftLeftElements(int array[], size_t size);
 

void ShiftLeftElements(int array[], size_t size)
{
 
  int i;

  for (i=0;i<size-1;i++)
  {
        array [i] = array [i+1];
  }
}

void MoveElements(int array[], size_t size, size_t count)
{
    int temp =0;
    int i;
    
    for (i=0;i<count;i++)
    {
       temp = array [0];
       ShiftLeftElements(array,size);
       array [size -1] = temp;
    }
}
    
