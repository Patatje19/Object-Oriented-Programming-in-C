#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <map> 
#include <string>

class book {
private:
	std::map<int, std::string> _books {
		{1, "The pragmatic programmer"},
		{2, "How to use the terminal"},
		{3, "Data structures"},
		{4, "Assembly in the real word"},
		{5, "Python for dummys"},
	
	};
	
	int _book_index;
	
	std::string _book_name;
	
public:
	book() {};
	
	void get_book_list();
	
	void get_book(int _book_index);
	
	void create_book(int _book_index, std::string _book_name);
	
	void delete_book(int _book_index);
	
};

#endif // BOOK_HPP
