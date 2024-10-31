#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("Enter First Number \n");
    scanf("%d",&n1);
    printf("Enter Second Number \n");
    scanf("%d",&n2);
    printf("Enter Third Number \n");
    scanf("%d",&n3);

    max = (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);

    printf("%d is the greatest number \n",max);
    

return 0;
}
