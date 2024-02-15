#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
  int iSum =0 ;
  int iCnt = 0;
  for(iCnt = 0 ; iCnt<iSize ; iCnt++)
  {
    
    iSum= iSum + Arr[iCnt];
   
  }
  
  return (iSum/iSize) ;

}
int main()
{
    int iCount = 0,iCnt = 0;
    float fRet = 0;
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

    fRet = Average(ptr,iCount);
    printf("Average of  number is : %d \n",iRet);
    return 0 ;
}