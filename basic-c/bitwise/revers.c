#include<stdio.h>
void main()
{
    int num = 0,i = 0,res = 0;
    printf("Enter the number :");
    scanf("%d",&num);

    printf("Number before reverse : ");
    for(i=31;i>=0;i--) {
        if(num & (1<<i))
            printf("1");
        else
            printf("0");
        }
    printf("\n");

    for(i=0;i<=31;i++)
    {
        if(num & (1<<i))
        {
            res = res | (1<<(31-i));
        }
    }

    num = res;

    printf("Number After reverse : ");
    for(i=31;i>=0;i--) {
        (num & (1 << i)) ? printf("1") : printf("0");
        }
    printf("\n");

    printf("reverse bits of 32 bit interger %d", num);
    printf("\n");
}
