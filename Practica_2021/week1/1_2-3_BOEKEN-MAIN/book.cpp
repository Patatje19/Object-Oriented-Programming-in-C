#include "book.h"

void book::get_book_list() {
	for (auto i = _books.begin(); i != _books.end(); i++) {
		std::cout << "[ " << i->first << " , " << i->second << " ]" << std::endl;
		
	}
	
}


void book::get_book(int _book_index) {
	std::cout << "Book" << " [ " << _book_index << " ] "  << " = " << _books[_book_index] << std::endl;  
	
}


void book::create_book(int _book_index, std::string _book_name) {
	_book_name = _books[_book_index];
	
}


void book::delete_book(int _book_index) {
	_books.erase(_book_index);   
	
}
