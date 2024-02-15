#include<stdio.h>
/* 1th 8
 2nd 9
 3rd 10
 4th 11
 5th 12
 */

void  DisplayExamTime(int iStandard)
{ 
     if(iStandard == 1)
     {
        printf("your exam is at 8 AM\n");
     }
     else if(iStandard == 2)
     {
        printf("your exam is at 9 AM\n");
     }
     else if(iStandard == 3)
     {
        printf("your exam is at 10 AM\n");
     }
     else if(iStandard == 4)
     {
        printf("your exam is at 11 AM\n");
     }
     else if(iStandard == 5)
     {
        printf("your exam is at 12 AM\n");
     }

   
}
int main()
{
    auto int iValue = 0;
   

    printf("Enter your Standard\n");
    scanf("%d",&iValue);
    printf ("your standard %d\n",iValue);

    DisplayExamTime(iValue);
   
    
    return 0;
}