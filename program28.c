// print n times jay ganesh

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
   for(iCnt = 1; iCnt <= iNo; iCnt++ )
   {
      printf("jay ganesh\n");
   }

};

int main()
{   
    int ivalue = 0;
    printf("how many times do you want to printf\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}