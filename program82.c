// accept multiple n number from user and find smallest and largest number from that
// we cant return 2 values ,so we will display value from function
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize , int iNo);
{
  int iCount = 0 ;
  int iCnt = 0;
  
  for(iCnt = 0 ; iCnt<iSize ; iCnt++)
  {
    if(iNo == Arr[iCnt])
    {
        iCount++;
    }
    
  
  }
  

}
int main()
{
    int iCount = 0,iCnt = 0 , iNumber = 0;
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
       printf("\nEnter the  no which you want to check repitation  :");
       scanf("%d",&iNumber);

   

    iRet =  Frequency(ptr,iCount,iNumber);
   // printf("Minimum  of  number is : %d \n",iRet);
    return 0 ;
}