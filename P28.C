/* AIM: Make a system for Library
   Programmer: Jihan Patel
   Date: 4/11/2055
   */
   #include<stdio.h>
   struct Book
   {
    int Accesionnumber;
    char bookname[50];
    char Author[50];
    float price;
    int status;
   };
   int main()
   {
    struct Book S1;
    printf("Enter the Accession number: ");
    scanf("%d",&S1.Accesionnumber);

    printf("\nEnter the book name: ");
    scanf("%s",&S1.bookname);

    printf("\nEnter the Author name: ");
    scanf("%s",&S1.Author);

    printf("\nEnter the price of the book: ");
    scanf("%f", &S1.price);
x:
    printf("\n Enter the book status:(1=issued,0==Available)");
    scanf("%d",&S1.status);

    if(S1.status==1)
        printf("Book is issued");
    else if(S1.status==0)
        printf("Book is available");
    else
    {
        printf("Invalid input");
        goto x;
   }


  printf("\nBOOK DETAILS ENTERED\n");


  printf("Accession number    : %d\n",S1.Accesionnumber);
  printf("Book Name           : %s\n",S1.bookname);
  printf("Author name         : %s\n",S1.Author);
  printf("Price of book       : %.2f\n",S1.price);
  printf("status              : %s\n",(S1.status==1) ? "issued": "Available");


  return 0;
   }
