#include <stdio.h>
#include <string.h>
#include "Implementation.h"

static void swapelement(int a, int b);

void CreateInformat(int lowLimit,int highLimit,int counter, char* buff)
{
  sprintf(buff,"%s\n%d-%d, %d\n",CSVFormat,lowLimit,highLimit,counter);
}


void doSort(int *A,int len)
{
  int tmp,i,j;
 for(i=0;i<len;i++)
 {
   for(j=0;j<(len-i-1);j++)
   { 
    swapelement(A[j],A[j+1]);
   }
 }
}


int CountValue(int *A,int len, int low,int high)
{
int i,cnt = 0;
for(i=0;i<=len;i++)
{
  if(A[i]>=low && A[i]<=high)
  {
      cnt++;
  }
}
  return cnt;
}


 static void swapelement(int a, int b)
 {
   int tmp;
   if(a>b)
   {
      tmp = a;
      a = b;
      b = tmp;
   }
 }
