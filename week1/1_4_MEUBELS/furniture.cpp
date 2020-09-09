#include <furniture.hpp>


void furniture::print_furniture() {
	table_1.print_table();
	
	stool_1.print_stool();
	stool_2.print_stool();
	stool_3.print_stool();
	stool_4.print_stool();
	
}


void furniture::print_more_hipster() {
	std::cout << "We have hipsterized youre furniture" << std:: endl;
	
	std::cout << std::endl;
	
}


void stool::print_stool() {
	std::cout << "Content of object stool" << std::endl;
	
	std::cout << "Number of legs:  " << n_legs  << std::endl;
	std::cout << "Number of seats: " << n_seats << std::endl;
	
	std::cout << std::endl;
	
}


void table::print_table() {
	std::cout << "Content of object table" << std::endl;
	
	std::cout << "Number of legs:  " << n_legs << std::endl;
	std::cout << "Length of table: " << length << std::endl;
	std::cout << "Width of table:  " << width  << std::endl;
	
	std::cout << std::endl;
	
}


void furniture::make_more_hipster() {
	table_1.increase_leg(table_1);
	
	stool_1.decrease_leg(stool_1);
	stool_2.decrease_leg(stool_2);
	stool_3.decrease_leg(stool_3);
	stool_4.decrease_leg(stool_4);
	
}


void table::increase_leg(table & table_0) {
	table_0.n_legs = 10;
	
}


void stool::decrease_leg(stool & stool_0) {
	stool_0.n_legs = 3;
	
}
