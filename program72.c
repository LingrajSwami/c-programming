// take as much as number ,  possible from user and count how
// many odd numbers are from there 

#include<stdio.h>
#include<stdlib.h>

// void Display(int *Arr, int iSize)
int OddCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOddCnt = 0 ;
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        { 
        iOddCnt++ ; 
        }
    }
    return iOddCnt;

}
int main()
{
    int iCount = 0,iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);
  
   ptr = (int *)malloc(iCount*sizeof(int));

   printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
   printf("Enter the values : \n");

   for(iCnt=0 ; iCnt < iCount ; iCnt++)
   {
    printf("\nEnter the elements no %d :",iCnt+1);
    scanf("%d",&ptr[iCnt]);
   }
   iRet = OddCount(ptr, iCount);
   printf("Number of Odd elements are : %d\n",iRet);

   free(ptr);
   printf("\nDynamic memory gets deallocated successfully..\n");
    return 0 ;
}