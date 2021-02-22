#include "filled_rectangle.h"

void filled_rectangle::print() {
	for(int i = _start_y; i < _end_y + 1; i++) {
		for(int j = _start_x; j < _end_x + 1; j++) {
			_window.write(hwlib::xy( i, j ), _colour);
		
		}
	
	}

	_window.flush();

}
