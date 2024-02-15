//probleam statement ; avg of 3 number

#include<stdio.h>


 float Average(int no1,int no2,int no3)
{
    auto float favg = 0.0f;
    favg = ((float)(no1+no2+no3)/3);
    return favg;
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto float fRet = 0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second number\n");
    scanf("%d",&iValue2);

    printf("Enter the Third number\n");
    scanf("%d",&iValue3);

    fRet= Average(iValue1,iValue2,iValue3);
    printf("Average is : %f\n",fRet);


    return 0;
}