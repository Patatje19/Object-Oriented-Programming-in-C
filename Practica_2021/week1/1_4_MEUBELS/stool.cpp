#include "stool.h"

void stool::change_legs_stool(const int& _amount) {
	_n_legs = _n_legs - _amount;
	
}

int stool::get_legs_stool() {
	return _n_legs;
	
}
