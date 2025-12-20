/* 
4. Create a structure Book having:

        book_id
        title
        price
*/

#include<stdio.h>
struct Book {
    int book_id;
    char title[50];
    float price;
    char author[50]
};
int main(){
    struct Book b1;
    printf("Enter book id: ");
    scanf("%d", &b1.book_id);
    printf("Enter book title: ");
    scanf("%s", b1.title);
    printf("Enter book price: ");
    scanf("%f", &b1.price);
    printf("Enter book author: ");
    scanf("%s", b1.author);

    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b1.book_id);
    printf("Title: %s\n", b1.title);
    printf("Price: %.2f\n", b1.price);
    printf("Author: %s\n", b1.author);

    return 0;
}
