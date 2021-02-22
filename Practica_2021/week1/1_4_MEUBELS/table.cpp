#include "table.h"

void table::change_legs_table(const int& _amount) {
	_n_legs = _n_legs + _amount;
	
}

int table::get_legs_table() {
	return _n_legs;
	
}
