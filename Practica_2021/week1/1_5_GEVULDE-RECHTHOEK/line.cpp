#include "line.h"

void line::print() {
	hwlib::line line_object_1(hwlib::xy(_start_x, _start_y), hwlib::xy(_end_x, _end_y ));

	line_object_1.draw(_window);
	_window.flush();

}
