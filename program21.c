//probleam statement ; maximum from two number

#include<stdio.h>


 int Maximum(int no1,int no2)
{
    if(no1>no2)
    {
        return no1;
    }else if(no1<no2)
    {
        return no2;
    }
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet = 0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second number\n");
    scanf("%d",&iValue2);

    iRet= Maximum(iValue1,iValue2);
    printf("Largest number is : %d\n",iRet);


    return 0;
}