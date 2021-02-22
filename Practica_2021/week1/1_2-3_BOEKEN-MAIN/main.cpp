#include "book.h"

int main () {
	book book_object_1;

	book_object_1.get_book_list();

	book_object_1.get_book(1);
	book_object_1.get_book(6);

	book_object_1.create_book(1, "Recursive functions");
	book_object_1.create_book(6, "How to make classes in C++");

	book_object_1.get_book_list();
	
	book_object_1.get_book(1);
	book_object_1.get_book(6);
	
	book_object_1.delete_book(1);
	book_object_1.delete_book(6);
	
	book_object_1.get_book_list();
	
	book_object_1.get_book(1);
	book_object_1.get_book(6);
	
}
