#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Implementation.h"


int main(void)
{
 
 int current_samples[7]={3, 3, 5, 4, 10, 11, 12};
 int storecount;
 char output[100];
 memset(output, 0, 100);
 

doSort(current_samples,7);
storecount = CountValue(current_samples,7,3,5);
CreateInformat(3,5,storecount,output);
 
 printf("%s", output);
// assert(strcmp(output,"Range, Readings\n4-5, 2\n") == 0);
  
return 0;
  
}