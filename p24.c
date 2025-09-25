/*Aim: Make a programme for making notes
 Programmer: Jihan Patel
 Date: 25/9/2025
 */

#include<stdio.h>
int main()
{
    int i,j,flag,length=0;
    char str1[]="Hello";
    char str2[]="Hi";
    char copy[10];
    char combined[20];
    for(i=0;str1[i]!= '\0' ;i++)
    {
        length ++;
    }
    printf("Length of str1: %d\n", length);

    for(i=length-1;str1[i]>0;i--)
    {
        printf("%c",str1[i]);
    }
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
    {if(str1[i]!=str2[i])
     flag=0;
     else
        flag=1;
    }
    if(flag==1)
        printf("\nstrings are same\n");
    else
        printf("\nstrings are different\n");

    for(i=0;str1[i]!='\0';i++)
    {
        copy[i]=str1[i];
    }
    copy[i]='\0';
    printf("copied str is %s\n",copy);
for(i = 0,j=0; str1[i] != '\0'; i++)
    {
        combined[j++] = str1[i];
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
        combined[j++] = str2[i];
    }
    combined[j] = '\0';

    printf("Concatenated string: %s\n", combined);

    for(i=0;str1[i]!='\0';i++)
    {
        if((int)str1[i]>=97 && (int)str1[i]<=122)
        {
            str1[i]-=32;
        }
    }
          printf("\n the upercase string is %s",str1);
     for(i=0;str1[i]!='\0';i++)
     {
         if((int)str1[i]>=65 && (int)str1[i]<=91)
         {
             str1[i]+=32;
         }
     }
     printf("\n the lowercase string is %s",str1);

     for(i=0;str1[i]!='\0';i++)
     {
         if(i==0 || str1[i-1]==' ')
         {
             str1[i]-=32;
         }
     }
     printf("\n the capitalize word is %s",str1);

return 0;



}
