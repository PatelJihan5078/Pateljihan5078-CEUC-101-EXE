//Aim: Write a program to create a dynamic memory allocation for an article summary using calloc() and then expand the memory using realloc().
//Programmer: Jihan Patel

#include<stdio.h>
#include<stdlib.h>

int main()
{printf( "Jihan Patel\n25CE091\n\n");

    char *summary;
    int initial_size, new_size;

    printf("enter initial memory size(bytes): ");
    scanf("%d", &initial_size);
    getchar();  

    summary = (char*)calloc(initial_size, sizeof(char));

    if(summary == NULL)
    {
        printf("memory allocation failed..\n");
        return 1;
    }

    printf("enter the initial article summary: ");
    fgets(summary, initial_size, stdin);

    printf("initial summary is: %s\n", summary);

    printf("enter new memory size(bytes) to expand summary: ");
    scanf("%d", &new_size);
    getchar();

    summary = (char*)realloc(summary, new_size * sizeof(char));

    if(summary == NULL)
    {
        printf("memory allocation failed..\n");
        return 1;
    }

    printf("enter the updated article summary: ");
    fgets(summary, new_size, stdin);

    printf("updated summary is: %s\n", summary);

    free(summary);
    return 0;
}