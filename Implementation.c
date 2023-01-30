#include <stdio.h>
#include <string.h>
#include "Implementation.h"

void CreateInformat(int lowLimit,int highLimit,int counter, char* buff)
{
  
//char Data[100];
sprintf(buff,"%s\n%d-%d, %d\n",CSVFormat,lowLimit,highLimit,counter);
 //printf("%s", buff);
//strncpy(buff,Data,strlen(Data));
}
void doSort(int *A,int len)
{
  int tmp,i,j;
 for(i=0;i<len;i++)
 {
   for(j=0;j<(len-i-1);j++)
   {
     if(A[j]>A[j+1])
     {
      tmp = A[j];
      A[j] = A[j+1];
      A[j+1] = tmp;
     }
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
