#include<stdio.h>
#include<stdlib.h>  // for malloc and free

void Display()
{
    
}
int main()
{
    int iCount = 0;
    int *ptr = NULL ;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));

    printf("Enter the elements : \n");

    int iCnt =0;
    for(iCnt = 0 ; iCnt<iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
for(iCnt = 0 ; iCnt<iCount ; iCnt++)
    {
         printf("Your entered the elements are: %d\n",ptr[iCnt]);
    }
   
    return 0;
}