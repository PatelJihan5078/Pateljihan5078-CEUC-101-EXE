//Aim: A program that reads a text file and reverses each word in the file while maintaining the original word order.
//Programmer: Jihan Patel

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *,int);

int main(void){
    printf("Jihan Patel\n25CE079\n\n");
    FILE *fp;
    fp = fopen("demo.txt","r");
    if (fp == NULL) {
        fp = fopen("demo.txt","r");
    }
    if (fp == NULL)
    {
        perror("Error Reading File");
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *data = malloc((size_t)size + 1);
    if (!data) {
        perror("malloc");
        fclose(fp);
        return 1;
    }

    size_t nread = fread(data, 1, (size_t)size, fp);
    data[nread] = '\0';
    reverse(data,size);

    free(data);
    fclose(fp);
    return 0;
}

void reverse(char *data,int size){
    int start = 0;
    for (int l = 0; l <= size; ++l)
    {
        char c = data[l];
        if (c == ' ' || c == '\0' || c == '\n')
        {
            for (int m = l - 1; m >= start; --m)
            {
                putchar(data[m]);
            }
            if (c == ' ') putchar(' ');
            start = l + 1;
        }
    }
    putchar('\n');
}