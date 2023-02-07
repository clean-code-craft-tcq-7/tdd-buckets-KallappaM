#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Implementation.h"

extern int A2DConverter(int LSBValue,int bit);
extern int *RemoveUnwanted(int Arr[],int bit);


int main(void)
{
 
 int current_samples1[]={};                      /*Empty Array it should return counter as 0 by default limit 1,1*/
 int current_samples2[]={1};                     /* Single element it should return 1  by default limit 1,1*/
 int current_samples3[]={1,1,1,1,1,1,1};         /* All same element it should return 7 by default limit 1,1 */
 int current_samples4[]={3, 3, 5, 4, 10, 11,12}; /* Given use case  3-5 it should return 4*/
 int current_samples5[]={3, 3, 5, 4, 10, 11,12}; /* Given use case  12-12 it should return 3*/
 int current_samples6[]={1,2};
 //int current_samples7[]={1,1,1,1,1,1};
 
 /*
 char output[100];
 memset(output, 0, 100);
 
PerformTest(current_samples1,LEN(current_samples1),1,1,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n1-1, 0\n") == 0);
 
PerformTest(current_samples2,LEN(current_samples2),1,1,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n1-1, 1\n") == 0);
 
PerformTest(current_samples3,LEN(current_samples3),1,1,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n1-1, 7\n") == 0);
 
PerformTest(current_samples4,LEN(current_samples4),3,5,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n3-5, 4\n") == 0);
 
PerformTest(current_samples5,LEN(current_samples5),10,12,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n10-12, 3\n") == 0);

PerformTest(current_samples6,LEN(current_samples6),1,2,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n1-2, 2\n") == 0);
 
PerformTest(current_samples7,LEN(current_samples7),4,5,output);
printf("%s", output);
assert(strcmp(output,"Range, Readings\n4-5, 0\n") == 0);*/
 
 int Sample1[] = {0,1,1024,4096,2048,4094,6000};
 GloableLen = (int const)(sizeof(Sample1)/sizeof(Sample1[0]));
 int *p,leng;
 p = RemoveUnwanted(Sample1,12, GloableLen);
 leng = LEN(Sample1);
 for(int i=0;i<leng;i++)
 {
  if(*(p+i)!=32768){
  printf("%d --> \n ", A2DConverter(*(p+i),12));
  }
  
 }

  
return 0;
  
}
