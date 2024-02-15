// accept multiple n number from user and find smallest number from that

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[],int iSize)
{
  int iMax =Arr[0] ;
  int iCnt = 0;
  
  for(iCnt = 0 ; iCnt<iSize ; iCnt++)
  {
    if(iMax < Arr[iCnt])
    {
        iMax = Arr[iCnt];
    }
  
  }
  return iMax;

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

    iRet = Max(ptr,iCount);
    printf("Maximum  of  number is : %d \n",iRet);
    return 0 ;
}