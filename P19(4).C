/* Aim: Make a pattern
   Name: Jihan Patel
   Date: 16/09/2025
   */

#include<stdio.h>
int main()
{
    int C,R,n,Ch;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(R=1;R<=n;R++)
    {
        Ch=64;
        for(C=1;C<=n-R;C++)
        {
            printf(" ");
        }
        for(C=n-R+1;C<=n;C++)
        {
            Ch++;
            printf("%c",Ch);
        }
        for(C=n+1;C<=n+R-1;C++)
        {
            Ch--;
            printf("%c",Ch);
        }
        printf("\n");
    }
    for(R=2;R<=n;R++)
    {
        Ch=64;
        for(C=1;C<=R-1;C++)
        {
            printf(" ");
        }
        for(C=R;C<=n;C++)
        {
            Ch++;
            printf("%c",Ch);
        }
        for(C=n+1;C<=2*n-R;C++)
        {
            Ch--;
            printf("%c",Ch);
        }
        printf("\n");
    }
}
