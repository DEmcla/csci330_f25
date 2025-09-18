#include <cstdio>
#include <cstring>

struct Book {
  char title[100];
  char author[50];
  int pages;
  double price;
};

Book create_book(const char *title, const char *author, int pages,
                 double price) {
  Book b;
  strncpy(b.title, title, sizeof(b.title) - 1);
  b.title[sizeof(b.title) - 1] = '\0';
  strncpy(b.author, author, sizeof(b.author) - 1);
  b.author[sizeof(b.author) - 1] = '\0';
  b.pages = pages;
  b.price = price;
  return b;
}

void print_book_info(const Book &b) {
  printf("Title: %s\n", b.title);
  printf("Author: %s\n", b.author);
  printf("Pages: %d\n", b.pages);
  printf("Price: $%.2f\n", b.price);
}

void apply_discount(Book &b, double discount_percent) {
  b.price *= (1.0 - discount_percent / 100.0);
}

Book copy_book(const Book &b) {
  Book new_book = b;
  char new_title[100];
  snprintf(new_title, sizeof(new_title), "Copy of %s", b.title);
  strncpy(new_book.title, new_title, sizeof(new_book.title) - 1);
  new_book.title[sizeof(new_book.title) - 1] = '\0';
  return new_book;
}

int main() {
  printf("=== Creating original book ===\n");
  Book original = create_book("The C++ Journey", "Jane Programmer", 300, 49.99);

  printf("\n=== Original book info ===\n");
  print_book_info(original);

  printf("\n=== Applying 20%% discount ===\n");
  apply_discount(original, 20);
  print_book_info(original);

  printf("\n=== Creating a copy ===\n");
  Book copy = copy_book(original);
  print_book_info(copy);

  printf("\n=== Modifying copy only ===\n");
  apply_discount(copy, 10);

  printf("Original - Title: %s, Price: $%.2f\n", original.title,
         original.price);
  printf("Copy - Title: %s, Price: $%.2f\n", copy.title, copy.price);

  return 0;
}
