#include "furniture.h"

void furniture::make_more_hipster() {
	_stool_object_1.change_legs_stool(1);
	_stool_object_2.change_legs_stool(1);
	_stool_object_3.change_legs_stool(1);
	_stool_object_4.change_legs_stool(1);
	
	_table_object_1.change_legs_table(4);
	
}

void furniture::print_furniture() {
	std::cout << "stool_object_1: " << "[ " << _stool_object_1.get_legs_stool() << " ]" << std::endl;
	std::cout << "stool_object_2: " << "[ " << _stool_object_2.get_legs_stool() << " ]" << std::endl;
	std::cout << "stool_object_3: " << "[ " << _stool_object_3.get_legs_stool() << " ]" << std::endl;
	std::cout << "stool_object_4: " << "[ " << _stool_object_4.get_legs_stool() << " ]" << std::endl;
	
	std::cout << "table_object_1: " << "[ " << _table_object_1.get_legs_table() << " ]" <<  std::endl << std::endl;
	
}
