#include <cstdio>
#include <cstring>

struct Book {
  char title[100];
  char author[50];
  int pages;
  double price;

  // TODO: Write a function 'create_book' that takes title, author, pages, price
  // and returns a Book (by value)
  static Book create_book(char title[100], char author[50], int pages,
                          double price) {
    Book newBook;
    strcpy(newBook.title, title);
    strcpy(newBook.author, author);
    newBook.pages = pages;
    newBook.price = price;
    return newBook;
  }

  // TODO: Write a function 'print_book_info' that takes a const Book reference
  // and prints all book information
  static void print_book_info(const Book& book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: $%.2f\n", book.price);
  }

  // TODO: Write a function 'apply_discount' that takes a Book reference and
  // discount percentage, then reduces the price
  static void apply_discount(Book& book, double discount) {
    book.price *= (1 - discount);
  }

  // TODO: Write a function 'copy_book' that takes a const Book reference and
  // returns a new Book with the same information but prefix "Copy of " to title
  static Book copy_book(const Book& book) {
    Book newBook;
    sprintf(newBook.title, "Copy of %s", book.title);
    strcpy(newBook.author, book.author);
    newBook.pages = book.pages;
    newBook.price = book.price;
    return newBook;
  }
};

int main() {
  printf("=== Creating original book ===\n");
  // TODO: Create a book "The C++ Journey" by "Jane Programmer", 300 pages,
  // $49.99
  Book originalBook =
      Book::create_book("The C++ Journey", "Jane Programmer", 300, 49.99);

  printf("\n=== Original book info ===\n");
  // TODO: Print the original book info
  Book::print_book_info(originalBook);

  printf("\n=== Applying 20%% discount ===\n");
  // TODO: Apply 20% discount to original book
  // TODO: Print updated info
  Book::apply_discount(originalBook, 0.2);
  Book::print_book_info(originalBook);

  printf("\n=== Creating a copy ===\n");
  // TODO: Create a copy of the discounted book
  // TODO: Print copy info
  Book copiedBook = Book::copy_book(originalBook);
  Book::print_book_info(copiedBook);

  printf("\n=== Modifying copy only ===\n");
  // TODO: Apply 10% discount to copy only
  // TODO: Print both original and copy to show they're different
  Book::apply_discount(copiedBook, 0.1);
  Book::print_book_info(originalBook);
  Book::print_book_info(copiedBook);

  return 0;
}