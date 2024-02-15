//probleam statement ; maximum from 3 number

#include<stdio.h>


 int Maximum(int no1,int no2 ,int no3)
{
    if((no1<=no2) &&(no3<=no2))
    {
        return no2;
    }else if((no1>=no2) && (no1>=no3))
    {
        return no1;
    }else
    {
        return no3;
    }
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iRet = 0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second number\n");
    scanf("%d",&iValue2);

    printf("Enter the Third number\n");
    scanf("%d",&iValue3);

    iRet= Maximum(iValue1,iValue2,iValue3);
    printf("Largest number is : %d\n",iRet);


    return 0;
}