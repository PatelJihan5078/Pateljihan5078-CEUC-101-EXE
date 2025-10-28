#include<stdio.h>
void displayBooks();
int getTotalBooks();
void borrowbook(char* book);
float calculatefine(int dayslate);
int main()
{
    int dayslate;
    float fine;
    char book[10];
    displayBooks();
    printf("Total No. of book are %d", getTotalBooks());
    printf("Enter the book you want to borrow: ");
    scanf("%s",&book);
    borrowBook(&book);
    printf("Enter the days you want to rent the book:");
    scanf("%d",&dayslate);
    fine= calculatefine( dayslate);
    printf("The total Fine is %f",fine);
}
void displayBooks(void)
{
    int i;
    char book[3][10] = {"maths","ccp","BEEE"};
    printf("List of available book");
    for(i=0;i<3;i++)
    {
        printf("the book we have is: %s",book[i]);
        printf("\n");
    }
 }
 int getTotalBooks()
 {
     int n=3;
     return n;
 }
 void borrowBook(char* book)
 {
     printf("Updated Inventory\n");
 }
 float calculatefine(int dayslate)
 {

     float fine=4.5,totalfine;
     totalfine = fine*dayslate;
     return totalfine;
 }
