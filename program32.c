#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo ; iCnt >=1 ; iCnt--)
    {
        printf(" * ",iCnt);
    }
 
}

int main()
{
    int ivalue = 0;
     
    printf("how many times you want to display star\n");
    scanf("%d",&ivalue);
    Display(ivalue); 
    
    return 0;
}