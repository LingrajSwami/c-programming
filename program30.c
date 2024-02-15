#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo ; iCnt >=1 ; iCnt--)
    {
        printf("hello %d \n",iCnt);
    }

}

int main()
{
    int ivalue = 0;
     
    printf("how many times you want to display\n");
    scanf("%d",&ivalue);
    Display(ivalue); 
    
    return 0;
}