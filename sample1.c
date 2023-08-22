#include <stdio.h>
int main()

{
    int a,b,c,sum;
    printf("Enter number A:-");
    scanf("%d", &a);
    printf("Enter number B:-");
    scanf("%d", &b);

    sum = a+b;
    printf("The sum is=%d",sum);

    c = a-b;
    printf(" \n The difference is %d",c);
    return 0;
}