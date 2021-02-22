#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>

#include "stool.h"
#include "table.h"

class furniture {
private:
	stool _stool_object_1;
	stool _stool_object_2;
	stool _stool_object_3;
	stool _stool_object_4;
	
	table _table_object_1;
	
public:
	furniture()  : 
		_stool_object_1(4, 1),
		_stool_object_2(4, 1),
		_stool_object_3(4, 1),
		_stool_object_4(4, 1),
	
		_table_object_1(6, 50, 20)
	
	{};
	
	void make_more_hipster();
	
	void print_furniture();
	
};

#endif // FURNITURE_HPP
