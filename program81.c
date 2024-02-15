// accept multiple n number from user and find smallest and largest number from that
// we cant return 2 values ,so we will display value from function
#include<stdio.h>
#include<stdlib.h>

int MaxMin(int Arr[],int iSize)
{
  int iMin =Arr[0] ;
  int iMax = Arr[0] ;
  int iCnt = 0;
  
  for(iCnt = 0 ; iCnt<iSize ; iCnt++)
  {
    if(iMin > Arr[iCnt])
    {
        iMin = Arr[iCnt];
    }
     if(iMax < Arr[iCnt])
    {
        iMax = Arr[iCnt];
    }
  
  }
  return iMin;

}
int main()
{
    int iCount = 0,iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;


    printf("how many number are there in array\n");
    scanf("%d",&iCount);
    
    ptr = (int *)malloc(iCount*sizeof(int));

     printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
   printf("Enter the values : \n");

   for(iCnt=0 ; iCnt < iCount ; iCnt++)
   {
    printf("\nEnter the elements no %d :",iCnt+1);
    scanf("%d",&ptr[iCnt]);
   }

   // iRet = 
   MaxMin(ptr,iCount);
   // printf("Minimum  of  number is : %d \n",iRet);
    return 0 ;
}